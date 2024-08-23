/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 13:54:23 by amaligno          #+#    #+#             */
/*   Updated: 2024/08/23 18:51:35 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		//Constructors
			FragTrap();
			FragTrap(string name);
			FragTrap(FragTrap &copy);
		//Destructor
			~FragTrap();
		//Operator overload
			FragTrap	&operator=(FragTrap &copy);
		//Methods
			void	highFivesGuys(void);
};

#endif