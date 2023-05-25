#include <cstddef>

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define YELLOW		"\x1b[33m"
# define BLUE		"\x1b[34m"
# define MAGENTA	"\x1b[35m"
# define CYAN		"\x1b[36m"
# define RESET		"\x1b[0m"

# define BOLD		"\x1b[1m"
# define ITALIC		"\x1b[3m"

template <typename T>
void iter(T* array, size_t arraySize, void (*f)(T&))
{
	for (size_t i = 0; i < arraySize; i++)
		(*f)(array[i]);
}
