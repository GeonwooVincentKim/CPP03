/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:19:22 by geonwkim          #+#    #+#             */
/*   Updated: 2024/12/08 23:21:30 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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