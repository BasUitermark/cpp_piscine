#include "../include/Array.hpp"
#include <iostream>

int main(void)
{
	{
		std::cout << BOLD "INT ARRAY TEST" RESET << std::endl;
		Array<int>	intTest(7);

		for(int i = 0; i < 7; i++)
			intTest[i] = i;
		
		std::cout << BLUE "Size of intTest: " RESET << intTest.size() << std::endl;
		try 
		{
			for(int i = 0; i < 7; i++)
				std::cout << BLUE "Numbers in intTest: " RESET << intTest[i] << std::endl;
		}
		catch (const std::exception& e){
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
	}


	{
		std::cout << BOLD "FLOAT ARRAY TEST" RESET << std::endl;
		Array<float>	floatTest(10);

		for(int i = 0; i < 10; i++)
			floatTest[i] = i;
		std::cout << BLUE "Size of floatTest: " RESET << floatTest.size() << std::endl;
		try 
		{
			for(int i = 0; i < 10; i++)
				std::cout << BLUE "Numbers in floatTest: " RESET << floatTest[i] << std::endl;
		}
		catch (const std::exception& e){
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
	}

	{
		std::cout << BOLD "STRING ARRAY TEST" RESET << std::endl;
		Array<std::string> stringTest(5);
		for(int i = 0; i < 5; i++)
			stringTest[i] = 'a' + i;
		std::cout << BLUE "Size of stringTest: " RESET << stringTest.size() << std::endl;
		try {
			for(int i = 0; i < 5; i++){
			std::cout << BLUE "Strings in stringTest: RESET" << stringTest[i] << std::endl;
			}
		}
		catch (const std::exception& e){
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
}
