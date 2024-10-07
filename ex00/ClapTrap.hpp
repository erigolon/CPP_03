/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:28:19 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/07 14:34:16 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
private:

    std::string	_name;
	int			_hitPoints		= 10;
	int			_energyPoints	= 10;
	int			_attackDamage	= 0;
    
public:

    ClapTrap(std::string name);
    ~ClapTrap(void);
	
	
    
};

#endif