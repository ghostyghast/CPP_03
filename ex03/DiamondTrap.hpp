/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 13:54:23 by amaligno          #+#    #+#             */
/*   Updated: 2024/08/23 01:16:02 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DiamondTrap_HPP
# define DiamondTrap_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		//Constructors
			DiamondTrap();
			DiamondTrap(string name);
			DiamondTrap(DiamondTrap &copy);
		//Destructor
			~DiamondTrap();
		//Operator overload
			DiamondTrap	&operator=(DiamondTrap &copy);
		//Methods
		void	whoAmI();
	private:
		string	_name;
};

#endif