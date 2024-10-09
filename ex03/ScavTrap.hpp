/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:00:12 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/09 10:56:51 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
protected:

    bool		_guardMode;

public:

    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &copy);

	ScavTrap&	operator=(const  ScavTrap& copy);

    ~ScavTrap();

	bool		getGuardMode(void) const;

	void		guardGate(void);
	void		attack(const std::string& target);
	
};

#endif