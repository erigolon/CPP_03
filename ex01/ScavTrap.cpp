/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:00:07 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/08 13:18:56 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Default ScavTrap constructor called" << std::endl;

	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_guardMode = false;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Parametric ScavTrap constructor for " << name <<" called" << std::endl;

	this->_hitPoints	= 100;
	this->_energyPoints	= 50;
	this->_attackDamage	= 20;
	this->_guardMode = false;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	std::cout << "Copy ScavTrap assignment operator called" << std::endl;
	
	if (this != &copy)
	{
		this->_name			= copy.getName();
		this->_hitPoints	= copy.getHitPoints();
		this->_energyPoints	= copy.getEnergyPoints();
		this->_attackDamage	= copy.getAttackDamage();
		this->_guardMode	= copy.getGuardMode();
	}
	
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap for " << this->_name <<" called" << std::endl;
}

bool		ScavTrap::getGuardMode(void) const
{
	return (this->_guardMode);
}

void	ScavTrap::guardGate(void)
{
	if (_guardMode == false)
	{
		_guardMode = true;
		std::cout << "ScavTrap " << this->_name <<" is now in Gate keeper mode." << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name <<" is already in Gate keeper mode." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
		if (this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name;
		std::cout << " is out of combat!" << std::endl;
		return ;
	}
	if (this->_energyPoints != 0)
	{
		std::cout << "ScavTrap " << this->_name;
		std::cout << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage;
		std::cout << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name;
		std::cout << " ran out of energy!" << std::endl;
	}
}