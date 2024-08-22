/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 20:22:12 by pringles          #+#    #+#             */
/*   Updated: 2024/08/20 23:38:13 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
using std::string;

class ClapTrap{
    private:
        //Attributes
            string  _name;
            int     _HP;
            int     _EP;
            int     _AP;
        //Private Helper function
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