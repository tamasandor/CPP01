/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:19:52 by atamas            #+#    #+#             */
/*   Updated: 2024/10/22 17:41:11 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon			*m_weapon;
	std::string		m_name;
public:
	void	setWeapon(Weapon *weapon);
	HumanB(std::string m_name);
	~HumanB();
};
