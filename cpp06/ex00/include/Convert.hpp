/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/02 11:35:10 by buiterma      #+#    #+#                 */
/*   Updated: 2023/02/02 18:08:16 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>

# define DEBUG_MESSAGE 0

class Convert
{
	private:
		std::string	_str;

		char	c;
		int		i;
		double	d;
		float	f;
		
		void	convertFromChar();

	public:
		//== Constructors/Destructors ==//
		Convert(std::string target);
		~Convert();
		Convert(const Convert& toCopy);

		Convert&	operator = (const Convert& toAssign);

		void	convertLiterals(int type);
};

#endif