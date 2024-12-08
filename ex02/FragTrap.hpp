/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:44:36 by geonwkim          #+#    #+#             */
/*   Updated: 2024/12/08 23:50:28 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
# define FragTrap_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap(const std::string name);
	FragTrap(const FragTrap& FragTrap);
	~FragTrap();
	FragTrap& operator=(const FragTrap& FragTrap);

	void highFivesGuys(void);
};

#endif
