/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:02:33 by hali-mah          #+#    #+#             */
/*   Updated: 2025/04/05 19:18:55 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _Hit_points = 100;
    _Energy_points = 50;
    _Attack_damage = 20;
    std::cout << "ScavTrap " << _Name << " Ready for action!\n" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _Name << " Work down, GoodBye!\n" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(_Hit_points <= 0 || _Energy_points <= 0)
    {
        std::cout << "ScavTrap " << _Name << " has no energy or HP left to attack!" << std::endl;
        return;
    }
    _Energy_points--;
    std::cout << "ScavTrap " << _Name << " aggressively attacks " << target 
              << ", causing " << _Attack_damage << " points of devastating damage!\n" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _Name << " is now in Gate keeper mode. No one shall pass!\n" << std::endl;
}
