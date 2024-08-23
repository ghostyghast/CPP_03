/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 20:22:12 by pringles          #+#    #+#             */
/*   Updated: 2024/08/23 18:29:57 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
using std::string;

class ClapTrap{
    protected:
        //Attributes
            string  _name;
            int     _HP;
            int     _EP;
            int     _AP;
        //Protected Helper function
            bool    canDo(void);
    public:
        //Constructors
			ClapTrap(void);
            ClapTrap(string name);
			ClapTrap(const ClapTrap &copy);
        //Destructor
            ~ClapTrap();
        //methods
            void    attack(const string &target);
            void    takeDamage(unsigned int amount);
            void    beRepaired(unsigned int amount);
		//Copy assignment operator
			ClapTrap	&operator=(const ClapTrap &copy);
};

#endif