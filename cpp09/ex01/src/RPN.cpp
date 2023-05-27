#include "RPN.hpp"
#include <stack>
#include <stdexcept>
#include <sstream>
#include <iostream>

RPN::RPN(const std::string& expression) : expression(expression)
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "RPN default constructor called" RESET << std::endl;
}

RPN::~RPN()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "RPN default destructor called" RESET << std::endl;
}

RPN::RPN(const RPN& toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "RPN copy constructor called" RESET << std::endl;
    expression = toCopy.expression;
}

RPN& RPN::operator=(const RPN& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "RPN copy assignment operator called" RESET << std::endl;
    if (this != &toAssign)
        expression = toAssign.expression;
    return *this;
}

int RPN::evaluate() const
{
    std::stack<int> stack;

    std::istringstream iss(expression);
    std::string token;
    while (iss >> token)
	{
        if (isdigit(token[0]))
            stack.push(std::stoi(token));
		else if (token.size() == 1 && std::string("+-*/").find(token[0]) != std::string::npos)
		{
            if (stack.size() < 2)
                throw std::runtime_error("Not enough operands");

            int operand2 = stack.top();
            stack.pop();
            int operand1 = stack.top();
            stack.pop();

            int result = performOperation(operand1, operand2, token[0]);
            stack.push(result);
        }
		else
            throw std::runtime_error("Invalid token");
    }

    if (stack.size() != 1)
        throw std::runtime_error("Invalid expression");

    return stack.top();
}

int RPN::performOperation(int operand1, int operand2, char operation) const
{
    switch (operation)
	{
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            if (operand2 == 0)
                throw std::runtime_error("Division by zero");
            return operand1 / operand2;
        default:
            throw std::runtime_error("Invalid operation");
    }
}
