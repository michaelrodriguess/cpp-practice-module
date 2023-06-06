/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:15:15 by microdri          #+#    #+#             */
/*   Updated: 2023/06/06 18:46:50 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Default Constructor */
Fixed::Fixed( void ) : _valueFixedPoint(0)
{
    std::cout << "default contructor called" << std::endl;
}

/* Destructor */
Fixed::~Fixed( void )
{
    std::cout << "destructor called" << std::endl;
}

/* Constructor that takes a value of int in the arguments */
Fixed::Fixed( const int valueInt )
{
    std::cout << "Constructor int called" << std::endl;
    this->_valueFixedPoint = valueInt << _numberFractionalBit ;
}

/* Constructor that takes a value of float in the arguments */
Fixed::Fixed( const float valueFloat )
{
    std::cout << "Constructor float called" << std::endl;
    this->_valueFixedPoint = valueFloat * (1 << _numberFractionalBit);
}

/* Convert to Integer */
int Fixed::toInt( void ) const
{
    int retValue = _valueFixedPoint / (1 << _numberFractionalBit);
    return (retValue);
}

/* Convert to Float */
float   Fixed::toFloat( void ) const
{
    float retValue = (float)_valueFixedPoint / (float)(1 << _numberFractionalBit);
    return ( retValue );
}

std::ostream &operator<<(std::ostream& outputStr, const Fixed &obj)
{
        outputStr << obj.toFloat();
        return ( outputStr );
}



