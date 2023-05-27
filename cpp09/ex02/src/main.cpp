#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <sys/time.h>
#include <iomanip>
#include <stdexcept>
#include <sstream>

std::vector<int> parseSequence(int argc, char* argv[])
{
    std::vector<int> sequence;
    for (int i = 1; i < argc; ++i)
    {
        std::istringstream iss(argv[i]);
        int num;
        if (!(iss >> num))
            throw std::invalid_argument("invalid positive integer");
        if (num <= 0)
            throw std::invalid_argument("invalid positive integer");
        sequence.push_back(num);
    }
    return sequence;
}

void displaySequence(const std::string& label, const std::vector<int>& sequence)
{
    std::cout << label << ": ";
    for (std::vector<int>::const_iterator it = sequence.begin(); it != sequence.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void displayDuration(const std::string& label, double duration, size_t size)
{
    std::cout << YELLOW "Time to process a range of " RESET BOLD << size << RESET YELLOW " elements " RESET << label << YELLOW ": " RESET;
    std::cout << std::fixed << std::setprecision(7) << duration << YELLOW " s" RESET << std::endl;
}

void runSorting(PmergeMe& pmergeMe, const std::vector<int>& sequence)
{
    timeval startVector;
    gettimeofday(&startVector, NULL);
    pmergeMe.sortUsingVector();
    timeval endVector;
    gettimeofday(&endVector, NULL);
    double durationVector = (endVector.tv_sec - startVector.tv_sec) + (endVector.tv_usec - startVector.tv_usec) / 1000000.0;

    timeval startList;
    gettimeofday(&startList, NULL);
    pmergeMe.sortUsingList();
    timeval endList;
    gettimeofday(&endList, NULL);
    double durationList = (endList.tv_sec - startList.tv_sec) + (endList.tv_usec - startList.tv_usec) / 1000000.0;

    displaySequence(BOLD GREEN "After (std::vector)" RESET, pmergeMe.getSortedVector());
    displayDuration(YELLOW "with std::vector" RESET , durationVector, sequence.size());
	std::cout << std::endl;
    displaySequence(BOLD GREEN "After (std::list)" RESET, pmergeMe.getSortedVector());
    displayDuration(YELLOW "with std::list" RESET, durationList, sequence.size());
}


int main(int argc, char* argv[])
{
    try
	{
        if (argc < 2)
            throw std::invalid_argument("not enough arguments provided.");

        std::vector<int> sequence = parseSequence(argc, argv);
        displaySequence(BLUE BOLD "Before" RESET, sequence);
		std::cout << std::endl;

        PmergeMe pmergeMe(sequence);
        runSorting(pmergeMe, sequence);

        return 0;
    } 
	catch (const std::exception& e)
	{
        std::cerr << BOLD RED "Error: " RESET << e.what() << std::endl;
        return 1;
    }
}