/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:53:58 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/09 11:02:09 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:

    std::string	_name;

public:

    DiamondTrap(void);
	DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &copy);

	DiamondTrap&	operator=(const  DiamondTrap& copy);
	
    ~DiamondTrap();

	void		whoAmI(void);
    
};

#endif