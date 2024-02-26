/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 23:44:37 by hbelhadj          #+#    #+#             */
/*   Updated: 2024/02/26 11:55:22 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{

    ClapTrap ClapTrap("haitam");
    ClapTrap.attack("Enemy");
    ClapTrap.takeDamage(30);
    ClapTrap.beRepaired(20);
    std::cout << "=============================" << std::endl;
    ScavTrap ScavTrap("othman");
    ScavTrap.attack("Enemy");
    ScavTrap.guardgate();    
}