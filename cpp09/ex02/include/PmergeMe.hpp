#ifndef PMERGE_ME_HPP
#define PMERGE_ME_HPP

#include <vector>
#include <list>

# define GREEN		"\x1b[32m"
# define RED		"\x1b[31m"
# define YELLOW		"\x1b[33m"
# define BLUE		"\x1b[34m"
# define MAGENTA	"\x1b[35m"
# define CYAN		"\x1b[36m"
# define RESET		"\x1b[0m"

# define BOLD		"\x1b[1m"
# define ITALIC		"\x1b[3m"

#define DEBUG_MESSAGE 0

class PmergeMe
{
	public:
		PmergeMe(const std::vector<int>& sequence);
		~PmergeMe();
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);

		void sortUsingVector();
		void sortUsingList();
		const std::vector<int>& getSortedVector() const;

	private:
		std::vector<int> sequence;
		std::vector<int> sortedVector;
		std::list<int> sortedList;

		void mergeInsertSort(std::vector<int>& sequence);
		void mergeInsertSort(std::list<int>& sequence);
};

#endif
