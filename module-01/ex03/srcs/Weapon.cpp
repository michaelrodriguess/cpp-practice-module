/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:23:21 by microdri          #+#    #+#             */
/*   Updated: 2023/05/23 18:42:48 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon ( std::string value ) : _type(value)
{
    std::cout << "Weapon Constructor called" << std::endl;
}

Weapon::~Weapon( void )
{
    std::cout << "Weapon Destructor called" << std::endl;
}

const std::string& Weapon::getType( void )
{
    return( this->_type );
}

void    Weapon::setType( std::string value )
{
    this->_type = value;
}



