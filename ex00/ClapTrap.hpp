/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:28:19 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/07 15:50:05 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
private:

    std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
    
public:

    ClapTrap(std::string name);
	ClapTrap(ClapTrap& copy);

	ClapTrap&		operator=(const  ClapTrap& copy);
	
    ~ClapTrap(void);
	
	void			attack(const std::string& target);
	void 			takeDamage(unsigned int amount);
	void 			beRepaired(unsigned int amount);
    
};

#endif