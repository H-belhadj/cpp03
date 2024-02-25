/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 11:19:53 by hbelhadj          #+#    #+#             */
/*   Updated: 2024/02/25 18:27:31 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->Name = "";
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap(const std::string& newName)
{
    this->Name = newName;
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
    std::cout << "Building FragTrap named " << Name << std::endl;
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap named " << Name << " has been destroyed!" <<std::endl;
}
void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << Name << " requests a high five!" << std::endl;
}

