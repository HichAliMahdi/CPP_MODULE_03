/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:02:33 by hali-mah          #+#    #+#             */
/*   Updated: 2025/04/05 19:34:53 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _Hit_points = 100;
    _Energy_points = 100;
    _Attack_damage = 30;
    std::cout << "FragTrap " << _Name << " Ready for action!\n" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _Name << " Work down, GoodBye!\n" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if(_Hit_points <= 0 || _Energy_points <= 0)
    {
        std::cout << "FragTrap " << _Name << " has no energy or HP left to attack!" << std::endl;
        return;
    }
    _Energy_points--;
    std::cout << "FragTrap " << _Name << " aggressively attacks " << target 
              << ", causing " << _Attack_damage << " points of devastating damage!\n" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _Name << " enthusiastically requests a high five! Come on, don't leave me hanging!\n" << std::endl;
}
