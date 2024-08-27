/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:54:47 by amaligno          #+#    #+#             */
/*   Updated: 2024/08/27 15:56:29 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
using	std::cout;

int	main()
{
	// cout << "\nCLAPTRAP-TESTS-----------------------------\n\n";
	
	// ClapTrap Clappy = ClapTrap("Clappy");
    // ClapTrap Clapster = ClapTrap("Clapster");
    // ClapTrap Clapper = ClapTrap("Clapper");
    
    // for(int i = 10; i; i--)
    // {
    //     Clappy.attack("Clapster");
    //     Clapster.attack("Clappy");
    // }
    // Clapster.attack("Clappy");
    // Clappy.beRepaired(10);
    
    // cout << "Great they both exausted themselves.\n"
    //     << "idiots.\n";
    
    // Clapster.takeDamage(10);
    // Clapster.beRepaired(10);
    
    // cout << "Wow that's impressive, it died of boerdom\n";
    
    // Clappy.beRepaired(10);
	
	cout << "\nSCAVTRAP-TESTS-----------------------------\n\n";

	ScavTrap	scavy("scavy");
	ScavTrap	scaver("scaver");
	
	scavy.attack("scaver");
	scaver.takeDamage(20);
	scaver.beRepaired(20);
	scaver.takeDamage(100);
	scaver.takeDamage(100);
	scaver.attack("self");

	ScavTrap	copy(scaver);
	copy.attack("scavy");
	copy.guardGate();

	scavy.guardGate();
	copy = scavy;
	copy.guardGate();
	for(int i = 50; i; i--)
		copy.attack("the air");
}