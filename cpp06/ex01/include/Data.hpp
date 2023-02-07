/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 14:48:44 by buiterma      #+#    #+#                 */
/*   Updated: 2023/02/07 16:05:19 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#define DEBUG_MESSAGE 0

class Data
{
	private:
		int	_value;

	public:
		Data();
		~Data();
		Data(const Data& toCopy);

		Data&	operator = (const Data& toAssign);

		void	testFunction();
};

#endif