/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:07:37 by hali-mah          #+#    #+#             */
/*   Updated: 2025/06/18 17:01:39 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : _Name("Default"), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
    std::cout << "ClapTrap " << _Name << " Default constructed\n";
}

ClapTrap::ClapTrap(const std::string& name)
    : _Name(name), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
    std::cout << "ClapTrap " << _Name << " constructed\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;
    std::cout << "ClapTrap " << _Name << " copied\n";
}

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

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _Name << " destroyed\n";
}

void ClapTrap::attack(const std::string& target)
{
    if (_Hit_points <= 0 || _Energy_points <= 0)
    {
        std::cout << "ClapTrap " << _Name << " can't attack (no energy or defeated)\n";
        return;
    }
    _Energy_points--;
    std::cout << "ClapTrap " << _Name << " attacks " << target
              << ", causing " << _Attack_damage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_Hit_points <= 0)
    {
        std::cout << "ClapTrap " << _Name << " is already defeated\n";
        return;
    }

    int actualDamage = std::min(_Hit_points, static_cast<int>(amount));
    _Hit_points -= actualDamage;

    std::cout << "ClapTrap " << _Name << " takes " << actualDamage
              << " damage! Remaining HP: " << _Hit_points << "\n";

    if (_Hit_points == 0)
        std::cout << "ClapTrap " << _Name << " has been defeated\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_Hit_points <= 0 || _Energy_points <= 0)
    {
        std::cout << "ClapTrap " << _Name << " can't repair (no energy or defeated)\n";
        return;
    }
    _Energy_points--;
    _Hit_points += amount;

    std::cout << "ClapTrap " << _Name << " repairs itself for " << amount
              << " HP! New HP: " << _Hit_points << "\n";
}
