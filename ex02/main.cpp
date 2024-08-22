/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:54:47 by amaligno          #+#    #+#             */
/*   Updated: 2024/08/23 01:14:00 by amaligno         ###   ########.fr       */
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
	frager.attack("fraggy");
}