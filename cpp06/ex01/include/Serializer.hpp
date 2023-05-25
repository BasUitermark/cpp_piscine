#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#define DEBUG_MESSAGE 1

#include "Data.hpp"
#include <stdint.h>

class Serializer
{
	private:
		Serializer();
		~Serializer();
		Serializer(const Serializer& toCopy);

		Serializer&	operator = (const Serializer& toAssign);

	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif