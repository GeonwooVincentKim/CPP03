/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:38:35 by geonwkim          #+#    #+#             */
/*   Updated: 2024/12/08 23:39:12 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	// Create a ClapTrap instance
    ClapTrap claptrap("Clappy");
    claptrap.attack("Target 1");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    // Create a ScavTrap instance
    ScavTrap scavtrap("Scavy");
    scavtrap.attack("Target 2");
    scavtrap.takeDamage(20);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();

    // Copy and assign ScavTrap
    ScavTrap copyScavtrap(scavtrap);
    ScavTrap assignedScavtrap = scavtrap;

    return 0;
}
