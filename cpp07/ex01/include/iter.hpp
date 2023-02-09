#include <cstddef>

template <typename T>
void iter(T* array, size_t arraySize, void (*f)(T&))
{
	for (size_t i = 0; i < arraySize; i++)
		(*f)(array[i]);
}
