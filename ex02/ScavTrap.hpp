/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:32:31 by geonwkim          #+#    #+#             */
/*   Updated: 2024/12/11 21:42:03 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap& scavtrap);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& scavtrap);

	void attack(const std::string& target);
	void guardGate();
};

#endif
