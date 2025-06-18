/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:08:10 by hali-mah          #+#    #+#             */
/*   Updated: 2025/06/18 17:37:28 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
    std::cout << "=== CREATING CLAPTRAP ===" << std::endl;
    ClapTrap clappy("Clappy");
    
    std::cout << "\n=== CREATING SCAVTRAP ===" << std::endl;
    ScavTrap scavvy("Scavvy");

    std::cout << "\n=== CREATING FRAGTRAP (PARAMETERIZED) ===" << std::endl;
    FragTrap fraggy("Fraggy");

    std::cout << "\n=== CREATING FRAGTRAP (DEFAULT) ===" << std::endl;
    FragTrap defaultFrag;

    std::cout << "\n=== COPYING FRAGTRAP ===" << std::endl;
    FragTrap copiedFrag(fraggy);

    std::cout << "\n=== ASSIGNING FRAGTRAP ===" << std::endl;
    defaultFrag = fraggy;

    std::cout << "\n--- Testing Attack ---\n";
    clappy.attack("Target Dummy");
    scavvy.attack("Bad Guy");
    fraggy.attack("Boss Enemy");

    std::cout << "\n=== TESTING TAKE DAMAGE ===" << std::endl;
    clappy.takeDamage(5);
    scavvy.takeDamage(30);
    fraggy.takeDamage(40);
    
    std::cout << "\n=== TESTING REPAIR ===" << std::endl;
    clappy.beRepaired(3);
    scavvy.beRepaired(10);
    fraggy.beRepaired(15);
    
    std::cout << "\n=== TESTING SPECIAL ABILITIES ===" << std::endl;
    scavvy.guardGate();
    fraggy.highFivesGuys();

    std::cout << "\n=== TESTING ENERGY LIMITS ===" << std::endl;
    // Let's make FragTrap use a lot of energy
    for (int i = 0; i < 5; i++) {
        fraggy.attack("Energy Test Target");
    }
    
    std::cout << "\n=== END OF PROGRAM, DESTRUCTORS WILL BE CALLED ===" << std::endl;
    return 0;
}
