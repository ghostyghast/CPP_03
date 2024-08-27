/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 13:54:23 by amaligno          #+#    #+#             */
/*   Updated: 2024/08/26 15:56:26 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		//Constructors
			FragTrap();
			FragTrap(string name);
			FragTrap(const FragTrap &copy);
		//Destructor
			~FragTrap();
		//Operator overload
			FragTrap	&operator=(const FragTrap &copy);
		//Methods
			void	highFivesGuys(void);
};

#endif