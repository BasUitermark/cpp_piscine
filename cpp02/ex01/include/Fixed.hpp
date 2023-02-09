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