/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:17:43 by geonwkim          #+#    #+#             */
/*   Updated: 2024/12/11 21:43:03 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream> 
#include <string>

class ClapTrap {
private:
	std::string name;
	unsigned int hit_points;
	unsigned int energy_points;
	unsigned int attack_damage;

public:
	ClapTrap();
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap& claptrap);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap& claptrap);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif