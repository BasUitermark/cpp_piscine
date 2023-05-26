#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

# include "../include/MutantStack.hpp"

//========== Constructors ==========//
template<typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "MutantStack default constructor called" RESET << std::endl;
	return;
}

//========== Destructors ==========//
template<typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "MutantStack default destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//
template<typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack& toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "MutantStack copy constructor called" RESET << std::endl;
	(void)toCopy;
}

//========== Assignment Operator ==========//
template<typename T, typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator = (const MutantStack& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Span copy assignment operator called" RESET << std::endl;
	(void)toAssign;
	return (*this);
}

template<typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin(void)
{
	return (this->c.begin());
}

template<typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end(void)
{
	return (this->c.end());
}

#endif
