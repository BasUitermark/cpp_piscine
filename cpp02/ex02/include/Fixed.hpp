/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 17:57:27 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/20 16:38:31 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					_number;
		static const int	_fractionalBits = 8;

	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed& copy);
		Fixed& operator = (const Fixed& copy);
		~Fixed();

		float	toFloat(void) const;
		int		toInt(void) const;
	
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		//== Static Member Functions ==//

		static Fixed&	Fixed::min(Fixed& a, Fixed& b);
		static Fixed&	Fixed::max(Fixed& a, Fixed& b);
		static const Fixed&	Fixed::min(const Fixed& a, const Fixed& b);
		static const Fixed&	Fixed::max(const Fixed& a, const Fixed& b);

		//== Comparison Operators ==//

		bool	Fixed::operator == (const Fixed& toCompare) const;
		bool	Fixed::operator != (const Fixed& toCompare) const;
		bool	Fixed::operator < (const Fixed& toCompare) const;
		bool	Fixed::operator > (const Fixed& toCompare) const;
		bool	Fixed::operator <= (const Fixed& toCompare) const;
		bool	Fixed::operator >= (const Fixed& toCompare) const;

		//== Arithmetic Operators ==//

		Fixed Fixed::operator + (const Fixed& toAdd) const;
		Fixed Fixed::operator - (const Fixed& toSubtract) const;
		Fixed Fixed::operator * (const Fixed& toFactor) const;
		Fixed Fixed::operator / (const Fixed& toDivide) const;

		//== Increment/Decrement Operators ==//

		Fixed& Fixed::operator ++ ();
		Fixed& Fixed::operator -- ();
		Fixed Fixed::operator ++ (int);
		Fixed Fixed::operator -- (int);
		
		
		

		bool	Fixed::operator == (const Fixed& toCompare) const;
		
};
	std::ostream& operator<<(std::ostream& out, const Fixed& toConvert);
	

#endif