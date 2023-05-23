/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:09:48 by microdri          #+#    #+#             */
/*   Updated: 2023/05/23 18:12:25 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main( void )
{
/*
    Weapon gunA;
    HumanA Malvo(gunA, "malvo");
    gunA.setType("Glock Rajada");
    Malvo.attack();

    Weapon gunB;
    HumanB NandinDaBazuca("NandinDaBazuca");
    NandinDaBazuca.attack();
    
    gunB.setType("Bazuca");
    NandinDaBazuca.setWeapon(gunB);
    NandinDaBazuca.attack();
*/
    {
        Weapon club = Weapon("crude spiked club");

        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }   
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
}