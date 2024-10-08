/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:27:55 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/08 15:40:52 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	bob = ClapTrap("Bob");

	ClapTrap	bib = bob;
	ClapTrap	bubs[3];

	ScavTrap	pepe;
	ScavTrap	ptomate("DIOS");

	FragTrap	kusukusu;

	kusukusu.attack("MAMITA");

	kusukusu = FragTrap("USA");

	kusukusu.attack("MAMITA");

	pepe.attack("Cosita");

	pepe.guardGate();
	pepe.guardGate();

	ScavTrap pupu = pepe;

	pupu.beRepaired(5);
	pupu.beRepaired(5);
	pupu.attack("NOOOO");

	pupu = ptomate;

	pupu.beRepaired(7);
	pupu.beRepaired(7);
	pupu.attack("SIIII");


	bob.attack("a worm");
	bob.attack("a worm");
	bob.attack("a worm");
	bob.attack("a worm");
	bob.attack("a worm");
	bob.attack("a worm");
	bob.attack("a worm");
	bob.attack("a worm");

	bob.takeDamage(9);
	bob.attack("a worm");
	bob.takeDamage(1);
	bob.attack("a worm"); // No more life
	bob.attack("a worm"); // If have one more life, will not have enought energy


	return (0);
}