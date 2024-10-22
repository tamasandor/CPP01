/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:19:37 by atamas            #+#    #+#             */
/*   Updated: 2024/10/22 17:34:34 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	: m_weapon(NULL)
{
	m_name = name;
}

HumanB::~HumanB()
{
}

void	setWeapon(Weapon &weapon);
{
	m_weapon = &weapon;
}