/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/02 11:35:10 by buiterma      #+#    #+#                 */
/*   Updated: 2023/02/07 12:26:24 by buiterma      ########   odam.nl         */
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

		char		c;
		int			i;
		long int	il;
		double		d;
		float		f;
		
		int		verifyType();

		void	convertFromChar();
		void	convertFromInt();
		void	convertFromDouble();
		void	convertFromFloat();

		void	displayVariables();
		void	displayChar();
		void	displayInt();
		void	displayDouble();
		void	displayFloat();

	public:
		//== Constructors/Destructors ==//
		Convert(std::string target);
		~Convert();
		Convert(const Convert& toCopy);

		Convert&	operator = (const Convert& toAssign);

		void	convertLiterals();
};

#endif