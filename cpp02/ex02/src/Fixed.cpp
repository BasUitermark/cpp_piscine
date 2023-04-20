#include "../include/Fixed.hpp"
#include <iostream>
#include <cmath>

//========== Constructors ==========//

Fixed::Fixed(void) :_number(0)
{
	if (DEBUG_MESSAGE)
		std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) :_number(n << _fractionalBits)
{
	if (DEBUG_MESSAGE)
		std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) :_number(roundf(n * (1 << _fractionalBits)))
{
	if (DEBUG_MESSAGE)
		std::cout << "Float constructor called" << std::endl;
}

//========== Copy Constructor ==========//

Fixed::Fixed(const Fixed& copy)
{
	if (DEBUG_MESSAGE)
		std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

//========== Destructor ==========//

Fixed::~Fixed(void)
{
	if (DEBUG_MESSAGE)
		std::cout << "Destructor called" << std::endl;
}

//========== Member Functions ===========//

int	Fixed::getRawBits(void) const
{
	return (this->_number);
}

void	Fixed::setRawBits(int const raw)
{
	this->_number = raw;
}

int	Fixed::toInt(void) const
{
	return (this->getRawBits() >> this->_fractionalBits);
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->getRawBits()) / (1 << _fractionalBits));
}

//========== Static Member Functions ==========//

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

//========== Comparison Operators ==========//

bool	Fixed::operator == (const Fixed& toCompare) const
{
	return (this->getRawBits() == toCompare.getRawBits());
}

bool	Fixed::operator != (const Fixed& toCompare) const
{
	return (this->getRawBits() != toCompare.getRawBits());
}

bool	Fixed::operator < (const Fixed& toCompare) const
{
	return (this->getRawBits() < toCompare.getRawBits());
}

bool	Fixed::operator > (const Fixed& toCompare) const
{
	return (this->getRawBits() > toCompare.getRawBits());
}

bool	Fixed::operator <= (const Fixed& toCompare) const
{
	return (this->getRawBits() <= toCompare.getRawBits());
}

bool	Fixed::operator >= (const Fixed& toCompare) const
{
	return (this->getRawBits() >= toCompare.getRawBits());
}

//========== Arithmetic Operators ==========//

Fixed Fixed::operator + (const Fixed& toAdd) const
{
	Fixed result;

	result.setRawBits(this->getRawBits() + toAdd.getRawBits());
	return (result);
}

Fixed Fixed::operator - (const Fixed& toSubtract) const
{
	Fixed result;

	result.setRawBits(this->getRawBits() - toSubtract.getRawBits());
	return (result);
}

Fixed Fixed::operator * (const Fixed& toFactor) const
{
	Fixed result;

	result.setRawBits(this->getRawBits() * toFactor.toFloat());
	return (result);
}

Fixed Fixed::operator / (const Fixed& toDivide) const
{
	Fixed result;

	result.setRawBits(this->getRawBits() / toDivide.toFloat());
	return (result);
}

//========== Increment/Decrement Operators ==========//

Fixed& Fixed::operator ++ ()
{
	this->_number++;
	return (*this);
}

Fixed& Fixed::operator -- ()
{
	this->_number--;
	return (*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed preIncrement(*this);
	++(*this);
	return (*this);
}

Fixed Fixed::operator -- (int)
{
	Fixed preIncrement(*this);
	--(*this);
	return (*this);
}

//========== Assignment Operator ==========//

Fixed& Fixed::operator = (const Fixed& copy)
{
	if (DEBUG_MESSAGE)
	std::cout << "Copy assignment operator called" << std::endl;
	this->_number = copy.getRawBits();
	return (*this);
}

//========== Stream Operator ==========//

std::ostream& operator<<(std::ostream& out, const Fixed& toConvert)
{
	out << toConvert.toFloat();
	return (out);
}
