/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 20:21:04 by pringles          #+#    #+#             */
/*   Updated: 2023/12/29 21:28:01 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
using std::string;
using std::cout;

ClapTrap::ClapTrap(string name): _name(name), _HP(10), _EP(10), _AP(0)
{
    cout << this->_name << " is born!" << '\n';
}

ClapTrap::~ClapTrap()
{
    cout << this->_name << " destructor called!" << '\n';
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
    this->_HP -= amount;
    cout << this->_name << " has been damaged for " << amount << "!\n";
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