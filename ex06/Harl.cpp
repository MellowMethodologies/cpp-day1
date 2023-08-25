/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:23:59 by sbadr             #+#    #+#             */
/*   Updated: 2023/08/25 12:27:47 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

	void Harl:: debug( void )
	{
		std::cout<< DEBUG <<std::endl;
	}

	void Harl:: info( void )
	{
		std::cout<< INFO <<std::endl;
	}

	void Harl:: warning( void )
	{
		std::cout<< WARNING <<std::endl;
	}

	void Harl:: error( void )
	{
		std::cout<< ERROR <<std::endl;
	}

	void Harl:: complain( std::string level )
	{
		int i = 0;
		
		std::string louder[4] = {
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR",
		};
		while (i != 4 && louder[i].compare(level) != 0)
			i++;
		switch (i)
		{
			case 0:
				debug();
			case 1:
				info();
			case 2:
				warning();
			case 3:
				error();
			default:
				std::cout << DEF << std::endl;
				break ;
		}
	}
