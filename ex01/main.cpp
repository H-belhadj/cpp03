/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 23:44:37 by hbelhadj          #+#    #+#             */
/*   Updated: 2024/02/24 00:07:27 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    {
    ClapTrap ClapTrap("ClapTrap");
    ClapTrap.attack("Enemy");
    ClapTrap.takeDamage(30);
    ClapTrap.beRepaired(20);
    }
    std::cout << std::endl;
    {
    ScavTrap ScavTrap("ScavTrap");
    ScavTrap.attack("Enemy");
    ScavTrap.guardgate();    
    }
}