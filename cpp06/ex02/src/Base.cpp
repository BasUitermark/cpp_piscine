/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 16:41:33 by buiterma      #+#    #+#                 */
/*   Updated: 2023/02/08 10:55:47 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"
#include "../include/Colors.hpp"
#include <iostream>

Base::~Base()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "Data default destructor called" RESET << std::endl;
}