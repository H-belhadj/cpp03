/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 23:44:40 by hbelhadj          #+#    #+#             */
/*   Updated: 2024/02/25 17:46:16 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
# include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
    this->Name = "";
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string &newName)
{
    (void)newName;
    std::cout << "Building ScavTrap named " << Name << std::endl;
}
ScavTrap::~ScavTrap()
{
    std::cout << "Destroying ScavTrap named " << Name << std::endl; 
}
void  ScavTrap::guardgate()
{
    std::cout << "Scavtrap " << Name << " is now in gatekeeper mode." << std::endl;
}