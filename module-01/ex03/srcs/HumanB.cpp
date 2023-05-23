/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:39:37 by microdri          #+#    #+#             */
/*   Updated: 2023/05/23 17:55:23 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name)
{
    this->_weaponType = NULL;
    std::cout << "HumanB Constructor called" << std::endl;
}

HumanB::~HumanB( void )
{
    std::cout << "HumanB Destructor called" << std::endl;
}

void    HumanB::attack( void )
{
    if (this->_weaponType != NULL)
        std::cout << this->_name << " attacks with their " << this->_weaponType->getType() << std::endl;
    else
        std::cout << this->_name << "attacks with their hands ;(" << std::endl;
}

void HumanB::setWeapon( Weapon weaponType )
{
    this->_weaponType = &weaponType;
}