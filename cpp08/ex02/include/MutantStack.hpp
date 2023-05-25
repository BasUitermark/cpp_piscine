
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define YELLOW		"\x1b[33m"
# define BLUE		"\x1b[34m"
# define MAGENTA	"\x1b[35m"
# define CYAN		"\x1b[36m"
# define RESET		"\x1b[0m"

# define BOLD		"\x1b[1m"
# define ITALIC		"\x1b[3m"

#define DEBUG_MESSAGE 0

#include <iterator>
#include <stack>

template<typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
	public:
	MutantStack();
	~MutantStack();
	
	MutantStack(const MutantStack& copy);
	MutantStack&	operator= (const MutantStack& assignment);

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

	iterator	begin();
	iterator	end();
	reverse_iterator	rbegin();
	reverse_iterator	rend();
};

#include "../src/MutantStack.tpp"

#endif
