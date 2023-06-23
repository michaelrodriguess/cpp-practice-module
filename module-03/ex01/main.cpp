/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:12:26 by microdri          #+#    #+#             */
/*   Updated: 2023/06/22 23:36:52 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
   
    ClapTrap Trevor("trevor");
    ClapTrap Michael("Michael");
    ClapTrap Franklin("Franklin");
    ScavTrap CJ("CJ");

    Franklin.attack("Balas");
    Trevor.attack("Vagos");
    Michael.attack("Madrazo Cartel");
    
    Trevor.takeDamage(10);
    Franklin.takeDamage(9);
    Franklin.beRepaired(10);
    Franklin.takeDamage(10);

    CJ.attack("Big Smoke");
    CJ.takeDamage(99);
    CJ.beRepaired(50);
    CJ.takeDamage(50);
    CJ.guardGate();

    

}

