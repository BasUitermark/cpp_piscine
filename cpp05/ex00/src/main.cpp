#include "../include/Bureaucrat.hpp"
#include <iostream>

int main(void)
{
	// Bureaucrat	Eddie("Eddie", 150);
	// Bureaucrat	Fred("Fred", 151);
	// Bureaucrat Sarah("Sarah", 1);
	// Bureaucrat Hilary("Hilary", 0);

	// Eddie.decrementGrade();
	// Sarah.incrementGrade();

	try{
		Bureaucrat Eddie("Eddie", 150);
	}
	catch(Bureaucrat::GradeTooLowException &e){
		std::cout << "Exception caught" << std::endl;
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e){
		std::cout << "Exception caught" << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try{
		Bureaucrat	Fred("Fred", 151);
	}
	catch(Bureaucrat::GradeTooLowException &e){
		std::cout << "Exception caught" << std::endl;
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e){
		std::cout << "Exception caught" << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try{
		Bureaucrat Sarah("Sarah", 1);
	}
	catch(Bureaucrat::GradeTooLowException &e){
		std::cout << "Exception caught" << std::endl;
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e){
		std::cout << "Exception caught" << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try{
		Bureaucrat Hilary("Hilary", 0);
	}
	catch(Bureaucrat::GradeTooLowException &e){
		std::cout << "Exception caught" << std::endl;
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e){
		std::cout << "Exception caught" << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try{
		Bureaucrat Eddie("Eddie", 150);
		Eddie.decrementGrade();
	}
	catch(Bureaucrat::GradeTooLowException &e){
		std::cout << "Exception caught" << std::endl;
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e){
		std::cout << "Exception caught" << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try{
		Bureaucrat Sarah("Sarah", 1);
		Sarah.incrementGrade();
	}
	catch(Bureaucrat::GradeTooLowException &e){
		std::cout << "Exception caught" << std::endl;
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e){
		std::cout << "Exception caught" << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	Bureaucrat Eddie("Eddie", 75);
	std::cout << Eddie << std::endl;
}
