/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 20:22:12 by pringles          #+#    #+#             */
/*   Updated: 2023/12/29 21:04:57 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
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
            ClapTrap(string name);
        //Destructor
            ~ClapTrap();
        //methods
            void    attack(const string &target);
            void    takeDamage(unsigned int amount);
            void    beRepaired(unsigned int amount);
};