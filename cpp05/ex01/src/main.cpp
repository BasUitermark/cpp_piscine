#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"
#include <iostream>

int main(void)
{
	//== Form Grade Tests ==//
	std::cout << "//== Form Grade Tests ==//" << std::endl;
	try{
		Form	test1("TestValid", 100, 120);
		std::cout << test1 << std::endl;
	}
	catch(Form::GradeTooLowException &e){
		std::cout << "Form Creation" << std::endl;
		std::cout << e.what() << std::endl;
	}
	catch(Form::GradeTooHighException &e){
		std::cout << "Form Creation" << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try{
		Form	test1("TestSignTooLow", 151, 120);
		std::cout << test1 << std::endl;
	}
	catch(Form::GradeTooLowException &e){
		std::cout << "Form Creation" << std::endl;
		std::cout << e.what() << std::endl;
	}
	catch(Form::GradeTooHighException &e){
		std::cout << "Form Creation" << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try{
		Form	test1("TestSignTooHigh", 0, 120);
		std::cout << test1 << std::endl;
	}
	catch(Form::GradeTooLowException &e){
		std::cout << "Form Creation" << std::endl;
		std::cout << e.what() << std::endl;
	}
	catch(Form::GradeTooHighException &e){
		std::cout << "Form Creation" << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try{
		Form	test1("TestExecuteTooLow", 100, 151);
		std::cout << test1 << std::endl;
	}
	catch(Form::GradeTooLowException &e){
		std::cout << "Form Creation" << std::endl;
		std::cout << e.what() << std::endl;
	}
	catch(Form::GradeTooHighException &e){
		std::cout << "Form Creation" << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try{
		Form	test1("TestExecuteTooHigh", 100, 0);
		std::cout << test1 << std::endl;
	}
	catch(Form::GradeTooLowException &e){
		std::cout << "Form Creation" << std::endl;
		std::cout << e.what() << std::endl;
	}
	catch(Form::GradeTooHighException &e){
		std::cout << "Form Creation" << std::endl;
		std::cout << e.what() << std::endl;
	}

	//== Form Sign Tests ==//
	std::cout << std::endl;
	std::cout << "//== Form Sign Tests ==//" << std::endl;
	try{
		Bureaucrat	Steve("Steve", 100);
		Form		test2("TestValid", 120, 100);
		test2.beSigned(Steve);
		std::cout << test2 << std::endl;
	}
	catch(Form::GradeTooLowException &e){
		std::cout << "Exception caught" << std::endl;
		std::cout << e.what() << std::endl;
	}
	catch(Form::GradeTooHighException &e){
		std::cout << "Exception caught" << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try{
		Bureaucrat	Steve("Steve", 100);
		Form		test2("TestSignTooLow", 80, 100);
		test2.beSigned(Steve);
		std::cout << test2 << std::endl;
	}
	catch(Form::GradeTooLowException &e){
		std::cout << "Exception caught" << std::endl;
		std::cout << e.what() << std::endl;
	}
	catch(Form::GradeTooHighException &e){
		std::cout << "Exception caught" << std::endl;
		std::cout << e.what() << std::endl;
	}

	//== Bureaucrat Sign Tests ==//
	std::cout << std::endl;
	std::cout << "//== Bureaucrat Sign Tests ==//" << std::endl;
	{
		Bureaucrat	Henry("Henry", 100);
		Form		test3("TestValid", 120, 100);
		Henry.signForm(test3);
		std::cout << test3 << std::endl;
	}

	std::cout << std::endl;
	{
		Bureaucrat	Henry("Henry", 100);
		Form		test3("TestSignTooLow", 80, 100);
		Henry.signForm(test3);
		std::cout << test3 << std::endl;
	}
}
