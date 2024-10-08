/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:17:51 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/08 15:39:10 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Default FragTrap constructor called" << std::endl;

	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Parametric FragTrap constructor for " << name <<" called" << std::endl;

	this->_hitPoints	= 100;
	this->_energyPoints	= 100;
	this->_attackDamage	= 30;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	std::cout << "Copy FragTrap constructor called" << std::endl;
	
	*this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	std::cout << "Copy FragTrap assignment operator called" << std::endl;
	
	if (this != &copy)
	{
		this->_name			= copy.getName();
		this->_hitPoints	= copy.getHitPoints();
		this->_energyPoints	= copy.getEnergyPoints();
		this->_attackDamage	= copy.getAttackDamage();
	}
	
	return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor FragTrap for " << this->_name <<" called" << std::endl;
}

void		FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name <<" high fives to everyone!" << std::endl;
}