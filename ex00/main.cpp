/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 20:20:34 by pringles          #+#    #+#             */
/*   Updated: 2023/12/29 21:26:59 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
using std::cout;

int main(void)
{
    ClapTrap Clappy = ClapTrap("Clappy");
    ClapTrap Clapster = ClapTrap("Clapster");
    ClapTrap Clapper = ClapTrap("Clapper");
    
    for(int i = 10; i; i--)
    {
        Clappy.attack("Clapster");
        Clapster.attack("Clappy");
    }
    Clapster.attack("Clappy");
    Clappy.beRepaired(10);
    
    cout << "Great they both exausted themselves.\n"
        << "idiots.\n";
    
    Clapster.takeDamage(10);
    Clapster.beRepaired(10);
    
    cout << "Wow that's impressive, it died of boerdom\n";
    
    Clappy.beRepaired(10);
}