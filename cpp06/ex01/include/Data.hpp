#ifndef DATA_HPP
# define DATA_HPP

#define DEBUG_MESSAGE 1

class Data
{
	private:
		int	_value;

	public:
		Data();
		~Data();
		Data(const Data& toCopy);

		Data&	operator = (const Data& toAssign);

		void	testFunction();
};

#endif