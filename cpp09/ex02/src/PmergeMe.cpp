#include "PmergeMe.hpp"
#include <iostream>

PmergeMe::PmergeMe(const std::vector<int>& sequence)
: sequence(sequence), sortedVector(), sortedList()
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "PmergME copy constructor called" RESET << std::endl;
}

PmergeMe::~PmergeMe()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "PmergME default destructor called" RESET << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe& toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "PmergME copy constructor called" RESET << std::endl;
	sequence = toCopy.sequence;
	sortedVector = toCopy.sortedVector;
	sortedList = toCopy.sortedList;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "PmergME copy assignment operator called" RESET << std::endl;
    if (this != &other)
    {
        sequence = other.sequence;
        sortedVector = other.sortedVector;
        sortedList = other.sortedList;
    }
    return *this;
}

void PmergeMe::sortUsingVector()
{
    sortedVector = sequence;
    mergeInsertSort(sortedVector);
}

void PmergeMe::sortUsingList()
{
    sortedList.assign(sequence.begin(), sequence.end());
    mergeInsertSort(sortedList);
}

const std::vector<int>& PmergeMe::getSortedVector() const
{
    return sortedVector;
}

void PmergeMe::mergeInsertSort(std::vector<int>& sequence)
{
    for (size_t i = 1; i < sequence.size(); ++i)
    {
        int key = sequence[i];
        int j = i - 1;
        while (j >= 0 && sequence[j] > key)
        {
            sequence[j + 1] = sequence[j];
            --j;
        }
        sequence[j + 1] = key;
    }
}

void PmergeMe::mergeInsertSort(std::list<int>& sequence)
{
    for (std::list<int>::iterator it = ++sequence.begin(); it != sequence.end(); ++it)
    {
        int key = *it;
        std::list<int>::iterator prevIt = --it;
        ++it;
        while (prevIt != sequence.begin() && *prevIt > key)
        {
            std::list<int>::iterator nextIt = prevIt;
            --prevIt;
            *++nextIt = *prevIt;
        }
        std::list<int>::iterator nextIt = prevIt;
        ++nextIt;
        *nextIt = key;
    }
}
