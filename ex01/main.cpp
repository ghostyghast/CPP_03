/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:54:47 by amaligno          #+#    #+#             */
/*   Updated: 2024/08/22 13:41:16 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	scavy("scavy");
	ScavTrap	scaver("scaver");

	scavy.attack("scaver");
	scaver.takeDamage(20);
	scaver.beRepaired(20);
	scaver.takeDamage(100);
	scaver.takeDamage(100);
	scaver.attack("self");

	ScavTrap	copy = ScavTrap("copy");
	copy.attack("scavy");
	copy.guardGate();
	copy.guardGate();
}