/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 17:58:27 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/18 18:40:17 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>
#include <iostream>

Fixed::Fixed(void) :fixedPointNumber(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy) :fixedPointNumber(copy.fixedPointNumber)
{
	std::cout << "Default copy constructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed& copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Default destructor called" << std::endl;
}