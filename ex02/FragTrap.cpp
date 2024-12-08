/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:45:06 by geonwkim          #+#    #+#             */
/*   Updated: 2024/12/08 23:46:53 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name) : ClapTrap(name) {
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "FragTrap " << name << " has been created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& fragtrap) : ClapTrap(fragtrap) {
	std::cout << "FragTrap " << name << " has been copied!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name << " has been destroyed!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& fragtrap) {
	ClapTrap::operator=(fragtrap);
	std::cout << "FragTrap " << name << " has been assigned!" << std::endl;
	return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << name << " requests high fives!" << std::endl;
}
