/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 17:57:27 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/19 17:14:42 by buiterma      ########   odam.nl         */
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

};
	std::ostream& operator<<(std::ostream& out, const Fixed& toConvert);
	

#endif