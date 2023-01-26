/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 09:38:17 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/26 10:44:09 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
	private:
		std::string	_ideas[100];

	public:
		Brain();
		~Brain();
		Brain(const Brain& toCopy);
		Brain& operator = (const Brain& toAssign);
};

#endif