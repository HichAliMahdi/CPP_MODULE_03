/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:02:33 by hali-mah          #+#    #+#             */
/*   Updated: 2025/06/18 17:21:46 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap() : ClapTrap()
{
    _Hit_points = 100;
    _Energy_points = 50;
    _Attack_damage = 20;
    std::cout << "ScavTrap " << _Name << " default constructed\n";
}

// Parameterized constructor
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    _Hit_points = 100;
    _Energy_points = 50;
    _Attack_damage = 20;
    std::cout << "ScavTrap " << _Name << " Ready for action!\n";
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap " << _Name << " copied\n";
}

// Copy assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    std::cout << "ScavTrap assignment operator called\n";
    return *this;
}

// Destructor
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _Name << " Work done, Goodbye!\n";
}

void ScavTrap::attack(const std::string& target)
{
    if (_Hit_points <= 0 || _Energy_points <= 0)
    {
        std::cout << "ScavTrap " << _Name << " has no energy or HP left to attack!\n";
        return;
    }
    _Energy_points--;
    std::cout << "ScavTrap " << _Name << " aggressively attacks " << target
              << ", causing " << _Attack_damage << " points of devastating damage!\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _Name << " is now in Gate keeper mode. No one shall pass!\n";
}
