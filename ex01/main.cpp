/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:08:10 by hali-mah          #+#    #+#             */
/*   Updated: 2025/04/03 15:38:35 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap robot("Clappy");

    std::cout << "\n--- Testing Attack ---\n";
    robot.attack("TargetBot");

    std::cout << "\n--- Testing Take Damage ---\n";
    robot.takeDamage(5);
    robot.takeDamage(6);

    std::cout << "\n--- Testing Repair ---\n";
    robot.beRepaired(5);

    std::cout << "\n--- Testing Energy Consumption ---\n";
    ClapTrap anotherBot("EnergyBot");
    for (int i = 0; i < 11; i++)
        anotherBot.attack("DummyBot");
    anotherBot.beRepaired(5);

    return 0;
}
