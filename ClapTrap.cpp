/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:07:37 by hali-mah          #+#    #+#             */
/*   Updated: 2025/04/03 13:25:51 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name )
    : _Name(name), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
    std::cout << "ClapTrap " << _Name << " Constructed!\n" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout<< "ClapTrap " << _Name << " Destroyed!\n" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if(_Hit_points == 0 || _Energy_points == 0)
    {
        std::cout << "ClapTrap " << _Name << " Has no energy points left" << std::endl;
        return ;
    }
    _Energy_points--;
    std::cout << "ClapTrap " << _Name << " attacks" << target << ", and he caused" << _Attack_damage << " points of damages\n" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    
}