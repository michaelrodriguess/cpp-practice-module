/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:36:33 by microdri          #+#    #+#             */
/*   Updated: 2023/05/23 18:13:05 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weaponType ) : _name(name), _weaponType(weaponType)
{
    std::cout << "HumanA Constructor called" << std::endl;
}

HumanA::~HumanA( void )
{
    std::cout << this->_name << ": HumanA Destructor called" << std::endl;
}

void    HumanA::attack( void )
{
    std::cout << this->_name << " attacks with their " << this->_weaponType.getType() << std::endl;
}
