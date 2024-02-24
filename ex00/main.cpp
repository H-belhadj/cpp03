/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:35:59 by hbelhadj          #+#    #+#             */
/*   Updated: 2024/02/23 19:08:49 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap hicham("allouch"), tefa7i("metwada3e");
    
    hicham.attack("messi");
    tefa7i.attack("messi");
    
    hicham.takeDamage(55);
    tefa7i.takeDamage(99);

    hicham.beRepaired(1111111111);
    tefa7i.beRepaired(2222222222);
}