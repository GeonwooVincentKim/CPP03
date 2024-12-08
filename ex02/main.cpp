/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:46:58 by geonwkim          #+#    #+#             */
/*   Updated: 2024/12/08 23:47:28 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    // Create a ClapTrap instance
    ClapTrap claptrap("Clappy");
    claptrap.attack("Target 1");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    std::cout << std::endl;

    // Create a ScavTrap instance
    ScavTrap scavtrap("Scavy");
    scavtrap.attack("Target 2");
    scavtrap.takeDamage(20);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();

    std::cout << std::endl;

    // Create a FragTrap instance
    FragTrap fragtrap("Fraggy");
    fragtrap.attack("Target 3");
    fragtrap.takeDamage(50);
    fragtrap.beRepaired(20);
    fragtrap.highFivesGuys();

    std::cout << std::endl;

    // Copy and assign FragTrap
    FragTrap copyFragtrap(fragtrap);
    FragTrap assignedFragtrap = fragtrap;

    return 0;
}
