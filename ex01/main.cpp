/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 23:44:37 by hbelhadj          #+#    #+#             */
/*   Updated: 2024/02/28 18:00:39 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{

    ClapTrap clap("haitam");
    clap.attack("Enemy");
    clap.takeDamage(30);
    clap.beRepaired(20);
    std::cout << "=============================" << std::endl;
    ScavTrap scav("othman");
    scav.attack("Enemy");
    scav.guardgate();
}