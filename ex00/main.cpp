/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:27:55 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/07 15:48:46 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	bob("Bob");

	ClapTrap	bib = bob;

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