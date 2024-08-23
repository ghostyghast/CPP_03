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

DiamondTrap::DiamondTrap() : ClapTrap()
{
    cout << "DiamondTrap default contructor called\n";
    this->_name = "Default DiamondTrap";
    this->_HP = 100;
    this->_EP = 100;
    this->_AP = 30;
}

DiamondTrap::DiamondTrap(string name) : ClapTrap(name)
{
    cout << "DiamondTrap contructor called\n";
    this->_HP = 100;
    this->_EP = 100;
    this->_AP = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap &copy) : ClapTrap(copy)
{
    cout << "DiamondTrap copy constructor called\n";
}

DiamondTrap::~DiamondTrap()
{
    cout << "DiamondTrap Destructor Called\n";
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
