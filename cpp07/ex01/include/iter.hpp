/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 12:08:47 by buiterma      #+#    #+#                 */
/*   Updated: 2023/02/08 15:50:27 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>

template <typename T>
void iter(T* array, size_t arraySize, void (*f)(T&))
{
	for (size_t i = 0; i < arraySize; i++)
		(*f)(array[i]);
}
