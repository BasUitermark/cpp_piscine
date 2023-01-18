/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 17:57:27 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/18 18:37:24 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					fixedPointNumber;
		static const int	fractionalBits = 8;
	public:
		Fixed::Fixed();
		Fixed::Fixed(const Fixed& copy);
		Fixed &operator=(const Fixed& copy);
		Fixed::~Fixed();
};

#endif