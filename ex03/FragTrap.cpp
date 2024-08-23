/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 21:39:28 by amaligno          #+#    #+#             */
/*   Updated: 2024/08/23 18:30:19 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
using std::cout;

FragTrap::FragTrap() : ClapTrap()
{
    cout << "FragTrap default contructor called\n";
    this->_HP = 100;
    this->_EP = 100;
    this->_AP = 30;
}

FragTrap::FragTrap(string name) : ClapTrap(name)
{
    cout << "FragTrap contructor called\n";
    this->_HP = 100;
    this->_EP = 100;
    this->_AP = 30;
}

FragTrap::FragTrap(FragTrap &copy) : ClapTrap(copy)
{
    cout << "FragTrap copy constructor called\n";
}

FragTrap::~FragTrap()
{
    cout << "FragTrap Destructor Called\n";
}

FragTrap	&FragTrap::operator=(FragTrap &copy)
{
	this->_name = copy._name;
    this->_HP = copy._HP;
    this->_AP = copy._AP;
    this->_EP = copy._EP;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
    if (canDo())
        cout << this->_name << ": High fives anyone?!\n";
}