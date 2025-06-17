/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:08:10 by hali-mah          #+#    #+#             */
/*   Updated: 2025/06/17 15:48:51 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap thor("Thor");
    ClapTrap loki("Loki");

    std::cout << "\n--- Thor Attacks First ---\n";
    thor.attack("Loki");
    loki.takeDamage(5);

    std::cout << "\n--- Loki Repairs Himself ---\n";
    loki.beRepaired(3);

    std::cout << "\n--- Loki Counter-Attacks ---\n";
    loki.attack("Thor");
    thor.takeDamage(7);

    std::cout << "\n--- Thor Attacks Until Exhausted ---\n";
    for (int i = 0; i < 10; ++i)
        thor.attack("Loki");

    std::cout << "\n--- Thor Tries to Attack Without Energy ---\n";
    thor.attack("Loki");

    std::cout << "\n--- Loki Takes Massive Damage ---\n";
    loki.takeDamage(100);

    std::cout << "\n--- Loki Tries to Repair While Defeated ---\n";
    loki.beRepaired(10);

    std::cout << "\n--- Creating a Clone of Thor ---\n";
    ClapTrap clone(thor);
    clone.attack("MirrorLoki");

    std::cout << "\n--- Assigning Loki's State to a New Bot ---\n";
    ClapTrap mimic;
    mimic = loki;
    mimic.attack("Thor");

    return 0;
}
