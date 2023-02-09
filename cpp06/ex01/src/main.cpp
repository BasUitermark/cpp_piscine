#include <stdint.h>
#include <iostream>
#include "../include/Data.hpp"
#include "../include/Colors.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t	cast = reinterpret_cast<uintptr_t>(ptr);
	return (cast);
}

Data* deserialize(uintptr_t raw)
{
	Data* cast = reinterpret_cast<Data*>(raw);
	return (cast);
}

int	main(void)
{
	Data		data;
	Data*		ptr = &data;

	uintptr_t	serialized = serialize(ptr);
	Data*		deserialized = deserialize(serialized);


	std::cout << BOLD "\t\t|PRE CAST|" RESET << std::endl;
	std::cout << "Data: \t\t" << &data << std::endl;
	std::cout << "ptr: \t\t" << ptr << std::endl;
	data.testFunction();
	std::cout << std::endl;

	std::cout << BOLD "\t\t|POST CAST|" RESET << std::endl;
	std::cout << "uintptr ptr: \t" << &serialized << std::endl;
	std::cout << "uintptr: \t" << serialized << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "\t\t|POST RECAST|" RESET << std::endl;
	std::cout << "Data: \t\t" << deserialized << std::endl;
	deserialized->testFunction();
}