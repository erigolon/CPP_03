/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:17:36 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/08 15:33:24 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:

    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap &copy);

	FragTrap&	operator=(const  FragTrap& copy);

    ~FragTrap();
    
    void		highFivesGuys(void);
    
};



#endif