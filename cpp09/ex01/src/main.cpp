#include <iostream>
#include <string>
#include <stack>
#include "RPN.hpp"

int main(int argc, char *argv[])
{
    if (argc < 2)
	{
        std::cerr << "Error: no expression provided." << std::endl;
        return 1;
    }

    std::string expression = argv[1];
    RPN rpn(expression);

    try
	{
        int result = rpn.evaluate();
        std::cout << result << std::endl;
    }
	catch (const std::exception& e)
	{
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
