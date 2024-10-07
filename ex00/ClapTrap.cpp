/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:28:07 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/07 15:46:53 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Default constructor for " << name <<" called" << std::endl;
	
	this->_name 		= name;
	this->_hitPoints	= 10;
	this->_energyPoints	= 10;
	this->_attackDamage	= 0;
	
	return ;
}

ClapTrap::ClapTrap(ClapTrap& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	
	this->_name			= copy._name;
	this->_hitPoints	= copy._hitPoints;
	this->_energyPoints	= copy._energyPoints;
	this->_attackDamage	= copy._attackDamage;

	return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	this->_name			= copy._name;
	this->_hitPoints	= copy._hitPoints;
	this->_energyPoints	= copy._energyPoints;
	this->_attackDamage	= copy._attackDamage;
	
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor for " << this->_name <<" called" << std::endl;
	
	return ;
}

void    ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " is out of combat!" << std::endl;
		return ;
	}
	if (this->_energyPoints != 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage;
		std::cout << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " ran out of energy!" << std::endl;
	}
    
    return ;
}

void 	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " take " << amount;
		std::cout << " point/s of damage!" << std::endl;
		this->_hitPoints = this->_hitPoints - amount;
	}
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " is out of combat!" << std::endl;
	}
		
	return ;
}

void 		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints != 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " repare himself " << amount;
		std::cout << " point/s of health!" << std::endl;
		this->_energyPoints--;
		this->_hitPoints = this->_hitPoints + amount;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " ran out of energy!" << std::endl;
	}

	return ;
}
