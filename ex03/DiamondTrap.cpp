/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:53:35 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/09 11:02:17 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "Default DiamondTrap constructor called" << std::endl;

    this->_name = "Unnamed";
	this->_hitPoints = FragTrap::getHitPoints();
	this->_energyPoints = ScavTrap::getEnergyPoints();
	this->_attackDamage = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	std::cout << "Parametric DiamondTrap constructor for " << name <<" called" << std::endl;

	this->_name = name;
	this->_hitPoints	= FragTrap::getHitPoints();;
	this->_energyPoints	= ScavTrap::getEnergyPoints();
	this->_attackDamage	= FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy._name + "_clap_name"), ScavTrap(copy._name + "_clap_name"), FragTrap(copy._name + "_clap_name")
{
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	
	*this = copy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy)
{
	std::cout << "Copy DiamondTrap assignment operator called" << std::endl;
	
	if (this != &copy)
	{
		this->_name			= copy.getName();
		this->_hitPoints	= copy.getHitPoints();
		this->_energyPoints	= copy.getEnergyPoints();
		this->_attackDamage	= copy.getAttackDamage();
		this->_guardMode	= copy.getAttackDamage();
	}
	
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor DiamondTrap for " << this->_name <<" called" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap name: " << _name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}