/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:54:47 by amaligno          #+#    #+#             */
/*   Updated: 2024/08/23 18:30:47 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	FragTrap	fragy("Fragy");
	FragTrap	frager("Frager");

	frager.highFivesGuys();
	fragy.highFivesGuys();
	fragy.attack("frager");
	frager.takeDamage(30);
	for(int i = 0; i < 99; i++)
	{
		frager.attack("fragy");
		fragy.takeDamage(30);
	}
	frager.beRepaired(30);
	fragy.highFivesGuys();
	frager.beRepaired(10);
	frager.highFivesGuys();
}