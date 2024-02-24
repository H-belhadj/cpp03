/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 11:19:53 by hbelhadj          #+#    #+#             */
/*   Updated: 2024/02/24 18:15:50 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& newName) : ClapTrap(newName)
{
    std::cout << "Building FragTrap named " << Name << std::endl;
}
FragTrap::~FragTrap()
{
    std::cout << "Destroying FragTrap named " << Name << std::endl;
}
void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << Name << " requests a high five!" << std::endl;
}