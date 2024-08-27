/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 21:39:28 by amaligno          #+#    #+#             */
/*   Updated: 2024/08/23 18:30:19 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
using std::cout;

DiamondTrap::DiamondTrap() : ClapTrap("Defalt DiamondTrap_clap_trap"), FragTrap(), ScavTrap()
{
    cout << "DiamondTrap default contructor called\n";
    this->_name = "Default DiamondTrap";
    this->_HP = FragTrap::_HP;
    this->_EP = ScavTrap::_EP;
    this->_AP = FragTrap::_AP;
}

DiamondTrap::DiamondTrap(string name) : ClapTrap(name + "_clap_trap"), FragTrap(name), ScavTrap(name)
{
    cout << "DiamondTrap contructor called\n";
    this->_name = name;
    this->_HP = FragTrap::_HP;
    this->_EP = ScavTrap::_EP;
    this->_AP = FragTrap::_AP;
}

DiamondTrap::DiamondTrap(DiamondTrap &copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
    *this = copy;
    cout << "DiamondTrap copy constructor called\n";
}

DiamondTrap::~DiamondTrap()
{
    cout << "DiamondTrap Destructor Called\n";
}

void    DiamondTrap::attack(const string &target)
{
    ScavTrap::attack(target);
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap &copy)
{
	this->_name = copy._name;
    this->_HP = copy._HP;
    this->_AP = copy._AP;
    this->_EP = copy._EP;
	return (*this);
}

void    DiamondTrap::whoAmI(void)
{
    cout << "DiamondTrap name: " << this->_name << "\n";
    cout << "ClapTrap name: " << ClapTrap::_name << '\n';
}
