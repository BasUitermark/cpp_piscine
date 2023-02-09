#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"
#include <iostream>

int main(void)
{

	//== Form Grade Tests ==//
	// Form	test1("TestValid", 100, 120);
	// Form	test1("TestSignTooLow", 151, 120);
	// Form	test1("TestSignTooHigh", 0, 120);
	// Form	test1("TestExecuteTooLow", 100, 151);
	// Form	test1("TestExecuteTooHigh", 100, 0);
	// std::cout << test1;

	//== Form Sign Tests ==//
	// Bureaucrat	Steve("Steve", 100);
	// Form		test2("TestValid", 120, 100);
	// Form		test2("TestSignTooLow", 80, 100);
	// test2.beSigned(Steve);

	//== Bureaucrat Sign Tests ==//
	// Bureaucrat	Henry("Henry", 100);
	// Form		test3("TestValid", 120, 100);
	// Form		test3("TestSignTooLow", 80, 100);
	// Henry.signForm(test3);
}
