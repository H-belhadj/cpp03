/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 11:19:48 by hbelhadj          #+#    #+#             */
/*   Updated: 2024/02/24 11:28:22 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("nou3mane"), Hit_points(10), Energy_points(10), Attack_damage(0)
{}

ClapTrap::ClapTrap(std::string Name) : Name(Name), Hit_points(10), Energy_points(10), Attack_damage(0)
{
    std::cout << "ClapTrap named "  << Name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : Name(other.Name), Hit_points(other.Hit_points), Energy_points(other.Energy_points), Attack_damage(other.Attack_damage)
{
    std::cout << "ClapTrap named " << Name << " has been created by copying " << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        Name = other.Name;
        Hit_points = other.Hit_points;
        Energy_points = other.Energy_points;
        Attack_damage = other.Attack_damage;
        std::cout << "ClapTrap named " << Name << " has been assigned!" << std::endl;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap named " <<  Name << " has been destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (Hit_points > 0 && Energy_points > 0)
    {
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
        Energy_points--;
    }
    else
        std::cout << "ClapTrap " << Name << " can't attack " << target << " due to low energy or nno hit points!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_points > 0)
    {
        Hit_points -= amount;
        std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage!" << std::endl;
        if (Hit_points <= 0)
            std::cout << "ClapTrap " << Name << " has been destroyed!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << Name << " has already been destroyed!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (Hit_points > 0)
    {
        Hit_points += amount;
        std::cout << "ClapTrap " << Name << " has been repaired for " << amount << " hit points!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << Name << " can't be repaired because it has already detroyes!" << std::endl;
}