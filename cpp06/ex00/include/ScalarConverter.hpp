#ifndef ScalarConverter_HPP
# define ScalarConverter_HPP

# include <string>

# define DEBUG_MESSAGE 1

class ScalarConverter
{
	private:
		static std::string	_str;
		static int			_type;

		static char			c;
		static int			i;
		static long int		il;
		static double		d;
		static float		f;
		
		static int		verifyType();

		static void	convertFromChar();
		static void	convertFromInt();
		static void	convertFromDouble();
		static void	convertFromFloat();

		static void	displayVariables();
		static void	displayChar();
		static void	displayInt();
		static void	displayDouble();
		static void	displayFloat();

		//== Constructors/Destructors ==//
		ScalarConverter(std::string target);
		~ScalarConverter();
		ScalarConverter(const ScalarConverter& toCopy);

		ScalarConverter&	operator = (const ScalarConverter& toAssign);

		static bool	isNumber(std::string str);

	public:
		static void	convertLiterals(std::string str);
};

#endif