/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:02:33 by hali-mah          #+#    #+#             */
/*   Updated: 2025/06/18 17:36:40 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Default constructor
FragTrap::FragTrap() : ClapTrap("DefaultFragTrap")
{
    _Hit_points = 100;
    _Energy_points = 100;
    _Attack_damage = 30;
    std::cout << "FragTrap " << _Name << " Default constructed\n";
}

// Parameterized constructor
FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    _Hit_points = 100;
    _Energy_points = 100;
    _Attack_damage = 30;
    std::cout << "FragTrap " << _Name << " Ready for action!\n";
}

// Copy constructor
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap " << _Name << " copied\n";
}

// Copy assignment operator
FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap assignment operator called\n";
    return *this;
}

// Destructor
FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _Name << " Work done, Goodbye!\n";
}

void FragTrap::attack(const std::string& target)
{
    if (_Hit_points <= 0 || _Energy_points <= 0)
    {
        std::cout << "FragTrap " << _Name << " has no energy or HP left to attack!\n";
        return;
    }
    _Energy_points--;
    std::cout << "FragTrap " << _Name << " aggressively attacks " << target
              << ", causing " << _Attack_damage << " points of devastating damage!\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _Name << " enthusiastically requests a high five! Come on, don't leave me hanging!\n";
}
