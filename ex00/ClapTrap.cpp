/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 20:21:04 by pringles          #+#    #+#             */
/*   Updated: 2024/08/23 18:26:26 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
using std::string;
using std::cout;

ClapTrap::ClapTrap(void): _name("random clap"), _HP(10), _EP(10), _AP(0)
{
    cout << "a random claptrap is born" << '\n';
}

ClapTrap::ClapTrap(string name): _name(name), _HP(10), _EP(10), _AP(0)
{
    cout << this->_name << " is born!" << '\n';
}

ClapTrap::ClapTrap(const ClapTrap &copy): _name(copy._name), _HP(copy._HP), _EP(copy._EP), _AP(copy._AP)
{
    cout << this->_name << " is born!" << '\n';
}


ClapTrap::~ClapTrap()
{
    cout << this->_name << " destructor called!" << '\n';
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	this->_AP = copy._AP;
	this->_EP = copy._EP;
	this->_HP = copy._HP;
	this->_name = copy._name;
	return (*this);
}

void    ClapTrap::attack(const string &name)
{
    if(!canDo())
        return ;
    this->_EP--;
    cout << this->_name << " is attacking " << name << " for "
        << this->_AP << " points of damage!" << '\n';
}

void    ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HP <= 0)
	{
		_HP = 0;
		cout << "I dont think " << this->_name << " can take anymore damage..\n.";
	}
	else
	{
		this->_HP -= amount;
		cout << this->_name << " has been damaged for " << amount << "!\n";
	}
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (!canDo())
        return;
    this->_EP--;
    this->_HP += amount;
    cout << this->_name << " has repaired themselves for " << amount << "HP\n";
}

bool    ClapTrap::canDo()
{
    if (this->_HP <= 0)
    {
        cout << this->_name << " is dead, thank god" << '\n';
        return (false);
    }
    
    if (this->_EP <= 0)
    {
        cout << this->_name << " is outta gas!" << '\n';
        return (false);
    }
    return (true);
}