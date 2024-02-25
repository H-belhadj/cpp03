/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 11:20:00 by hbelhadj          #+#    #+#             */
/*   Updated: 2024/02/25 17:46:03 by hbelhadj         ###   ########.fr       */
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