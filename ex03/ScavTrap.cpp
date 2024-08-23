/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 00:34:35 by amaligno          #+#    #+#             */
/*   Updated: 2024/08/22 21:47:20 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
using std::cout;

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_HP = 100;
	this->_EP = 50;
	this->_AP = 20;
	this->_guardMode = false;
	cout << "ScavTrap default contructor called\n";
}

ScavTrap::ScavTrap(string name) : ClapTrap(name)
{
	this->_HP = 100;
	this->_EP = 50;
	this->_AP = 20;
	cout << "ScavTrap contructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	cout << "Scavtrap copy construcor called\n";
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copy)
{
	this->_name = copy._name;
	this->_EP = copy._EP;
	this->_HP = copy._HP;
	this->_AP = copy._AP;
	this->_guardMode = copy._guardMode;
	return (*this);
}

ScavTrap::~ScavTrap()
{
    cout << "Scavtrap destructor called\n";
}

void	ScavTrap::guardGate(void)
{
	if (!this->_guardMode)
	{
		this->_guardMode = true;
		cout << "ScavTrap now in gatekeeper mode!\n";
	}
	else
	{
		this->_guardMode = false;
		cout << "ScavTrap no longer in gatekeeper mode.\n";
	}
}