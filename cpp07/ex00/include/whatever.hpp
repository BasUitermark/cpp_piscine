/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 12:08:47 by buiterma      #+#    #+#                 */
/*   Updated: 2023/02/08 13:52:02 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

template <typename T> 
void swap(T& x, T& y)
{
	T	swap;

	swap = x;
	x = y;
	y = swap;
}

template <typename T>
T min(T& x, T& y)
{
	if (x < y)
		return (x);
	return (y);
}

template <typename T>
T max(T& x, T& y)
{
	if (x > y)
		return (x);
	return (y);
}