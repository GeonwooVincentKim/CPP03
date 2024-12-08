/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:24:51 by geonwkim          #+#    #+#             */
/*   Updated: 2024/12/08 23:26:00 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap claptrap("Clappy");
	claptrap.attack("enemy");

	claptrap.takeDamage(5);
	claptrap.takeDamage(7);

	claptrap.beRepaired(3);
	claptrap.beRepaired(15);

	for (int i = 0; i < 10; i++)
		claptrap.attack("Dummy enemy");
	claptrap.attack("Out of HP's enemy");

	return 0;
}