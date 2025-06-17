/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:07:37 by hali-mah          #+#    #+#             */
/*   Updated: 2025/06/17 15:40:01 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap()
    : _Name("Default"), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
    std::cout << "ClapTrap Default constructed\n";
}

// Parameterized constructor
ClapTrap::ClapTrap(const std::string& name)
    : _Name(name), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
    std::cout << "ClapTrap " << _Name << " constructed\n";
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;
    std::cout << "ClapTrap " << _Name << " copied\n";
}

// Copy assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        _Name = other._Name;
        _Hit_points = other._Hit_points;
        _Energy_points = other._Energy_points;
        _Attack_damage = other._Attack_damage;
    }
    std::cout << "ClapTrap assignment operator called\n";
    return *this;
}

// Destructor
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _Name << " destroyed\n";
}

// Attack
void ClapTrap::attack(const std::string& target)
{
    if(_Hit_points == 0 || _Energy_points == 0)
    {
        std::cout << "ClapTrap " << _Name << " has no energy points left\n";
        return ;
    }
    _Energy_points--;
    std::cout << "ClapTrap " << _Name << " attacks " << target << ", causing " << _Attack_damage << " points of damage\n";
}

// Take damage
void ClapTrap::takeDamage(unsigned int amount)
{
    if (_Hit_points <= 0)
    {
        std::cout << "ClapTrap " << _Name << " is already down!\n";
        return ;
    }
    _Hit_points -= amount;
    std::cout << "ClapTrap " << _Name << " takes " << amount << " damage! Remaining HP: " << _Hit_points << "\n";
    if (_Hit_points <= 0)
        std::cout << "ClapTrap " << _Name << " has been defeated\n";
}

// Be repaired
void ClapTrap::beRepaired(unsigned int amount)
{
    if (_Hit_points <= 0 || _Energy_points <= 0)
    {
        std::cout << "ClapTrap " << _Name << " cannot repair itself with no energy or HP!\n";
        return ;
    }
    _Energy_points--;
    _Hit_points += amount;
    std::cout << "ClapTrap " << _Name << " repairs itself for " << amount << " HP! New HP: " << _Hit_points << "\n";
}
