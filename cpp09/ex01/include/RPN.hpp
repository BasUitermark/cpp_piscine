#ifndef RPN_HPP
#define RPN_HPP

#include <string>

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define YELLOW		"\x1b[33m"
# define BLUE		"\x1b[34m"
# define MAGENTA	"\x1b[35m"
# define CYAN		"\x1b[36m"
# define RESET		"\x1b[0m"

# define BOLD		"\x1b[1m"
# define ITALIC		"\x1b[3m"

#define DEBUG_MESSAGE 0

class RPN
{
	public:
		RPN(const std::string& expression);
		~RPN();
		RPN(const RPN& toCopy);
		RPN& operator=(const RPN& toAssign);

		int evaluate() const;

	private:
		std::string expression;

		int performOperation(int operand1, int operand2, char operation) const;
};

#endif
