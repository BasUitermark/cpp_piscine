#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					_number;
		static const int	_fractionalBits = 8;

	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& copy);
		~Fixed();
	
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

#endif