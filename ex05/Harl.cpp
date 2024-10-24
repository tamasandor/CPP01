/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:35:41 by atamas            #+#    #+#             */
/*   Updated: 2024/10/24 17:23:43 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug ( void )
{
	std::cout << "debug" << std::endl;
}
void	Harl::info ( void )
{
	std::cout << "info" << std::endl;
}
void	Harl::warning ( void )
{
	std::cout << "warning" << std::endl;
}
void	Harl::error ( void )
{
	std::cout << "error" << std::endl;
}

void	Harl::complain( std::string level)
{
	void	(Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	stringArray[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (size_t i = 0; i < 4; i++)
	{
		if (level.compare(stringArray[i]) == 0)
		{
			(this->*f[i])();
			break;
		}
	}
}
