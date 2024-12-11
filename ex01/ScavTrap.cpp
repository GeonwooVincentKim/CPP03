/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:33:13 by geonwkim          #+#    #+#             */
/*   Updated: 2024/12/11 21:03:15 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "ScavTrap " << name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap) : ClapTrap(scavtrap) {
	std::cout << "ScavTrap " << name << " has been copied!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " has been destroyed!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavtrap) {
	if (this != &scavtrap) {
		ClapTrap::operator=(scavtrap);
	}
	std::cout << "ScavTrap " << name << " has been assigned!" << std::endl;
	return *this;
}

void ScavTrap::attack(const std::string &target) {
	if (hit_points <= 0) {
		std::cout << "ScavTrap " << name << " can't attack because it's out of hit points!" << std::endl;
		return;
	}

	if (energy_points <= 0) {
		std::cout << "ScavTrap " << name << " can't attack because it's out of energy points!" << std::endl;
		return;
	}

	energy_points--;
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " has entered in Gate keeper mode!" << std::endl;
}
