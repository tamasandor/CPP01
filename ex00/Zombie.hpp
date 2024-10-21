/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:43:13 by atamas            #+#    #+#             */
/*   Updated: 2024/10/21 13:34:14 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
private:
	std::string m_name;
public:
	void	setName(std::string name);
	void	announce( void );
	Zombie(std::string name);
	~Zombie();
};

Zombie*	newZombie( std::string name );
void	randomChump(std::string name);
