/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 11:19:58 by hbelhadj          #+#    #+#             */
/*   Updated: 2024/02/24 11:41:17 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    // Create a ClapTrap object
    ClapTrap clapTrap("CL4P-TP");

    // Test ClapTrap functionalities
    clapTrap.attack("Bandit");
    clapTrap.takeDamage(20);
    clapTrap.beRepaired(10);

    // Create a FragTrap object
    FragTrap fragTrap("FR4G-TP");

    // Test FragTrap functionalities
    // fragTrap.attack("Bandit");
    // fragTrap.highFivesGuys();
    // fragTrap.takeDamage(30);

    // Create a ScavTrap object
    ScavTrap scavTrap("SC4V-TP");

    // Test ScavTrap functionalities
    scavTrap.attack("Bandit");
    scavTrap.guardgate();
    scavTrap.takeDamage(40);

    return 0;
}