/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:35:59 by hbelhadj          #+#    #+#             */
/*   Updated: 2024/02/28 17:36:44 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("pedri");
    
    clap.attack("alaba");
    // clap2.attack("alaba");
    
    clap.takeDamage(100);
    // clap2.takeDamage(20);

    clap.beRepaired(100);
    std::cout << clap << std::endl;
    // clap2.beRepaired(200);
}