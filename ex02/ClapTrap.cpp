/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:19:22 by geonwkim          #+#    #+#             */
/*   Updated: 2024/12/11 21:42:23 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}

// Constructor with name initialization
ClapTrap::ClapTrap(const std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0) {
	std::cout << "ClapTrap " << name << " has been created!" << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& claptrap) : name(claptrap.name), hit_points(claptrap.hit_points), energy_points(claptrap.energy_points), attack_damage(claptrap.attack_damage) {
	std::cout << "ClapTrap " << name << " has been copied!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name << " has been destroyed!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap) {
	if (this != &claptrap) {
		name = claptrap.name;
		hit_points = claptrap.hit_points;
		energy_points = claptrap.energy_points;
		attack_damage = claptrap.attack_damage;
	}
	std::cout << "ClapTrap " << name << " has been assigned!" << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	 if (hit_points <= 0) {
        std::cout << "ClapTrap " << name << " can't attack because it's out of hit points!" << std::endl;
        return;
    }
    if (energy_points <= 0) {
        std::cout << "ClapTrap " << name << " can't attack because it's out of energy points!" << std::endl;
        return;
    }

    energy_points--;
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount) {
	if (hit_points <= 0) {
		std::cout << "ClapTrap " << name << " can't take damage because it's out of hit points!" << std::endl;
		return;
	}

	hit_points -= amount;
	if (hit_points < 0)
		hit_points = 0;
	std::cout << "ClapTrap " << name << " repairs itself for " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (hit_points <= 0) {
		std::cout << "ClapTrap " << name << " can't be repaired because it's out of hit points!" << std::endl;
		return;
	}

	if (energy_points <= 0) {
		std::cout << "ClapTrap " << name << " can't be repaired because it's out of energy points!" << std::endl;
		return;
	}

	energy_points--;
	hit_points += amount;
	std::cout << "ClapTrap " << name << " repairs itself for " << amount << " points!" << std::endl;
}
