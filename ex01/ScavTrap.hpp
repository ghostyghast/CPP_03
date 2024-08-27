/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 00:34:30 by amaligno          #+#    #+#             */
/*   Updated: 2024/08/26 14:15:41 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		bool	_guardMode;
	public:
		//Constructors
		ScavTrap(void);
		ScavTrap(string name);
		ScavTrap(const ScavTrap &copy);
		//Destructor
		~ScavTrap();
		//Operator overloads
		ScavTrap	&operator=(const ScavTrap &copy);
		//Methods
		void	guardGate(void);
};

#endif