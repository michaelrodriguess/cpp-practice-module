/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:12:26 by microdri          #+#    #+#             */
/*   Updated: 2023/06/22 14:29:01 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap instance("GOKU");

    instance.attack("VEGETA");
    instance.takeDamage(5);
    instance.beRepaired(1);
    instance.takeDamage(7);
    instance.attack("1");
    instance.attack("2");
    instance.attack("3");
    instance.attack("4");
    instance.attack("5");
    instance.attack("6");
    instance.attack("7");
    instance.attack("8");

    instance.attack("trash");

}

