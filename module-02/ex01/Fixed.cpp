/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:15:15 by microdri          #+#    #+#             */
/*   Updated: 2023/06/20 16:35:00 by microdri         ###   ########.fr       */
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

/* Copy constructor */
Fixed::Fixed( const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_valueFixedPoint  = copy.getRawBits();
}

/* Overload operator */
Fixed& Fixed::operator=( const Fixed &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_valueFixedPoint =  copy.getRawBits();
    return ( *this );
}

/* Member Functions */
void Fixed::setRawBits( int const raw )
{
    this->_valueFixedPoint = raw;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return ( this->_valueFixedPoint );
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
    this->_valueFixedPoint = roundf(valueFloat * (1 << _numberFractionalBit));
}

/* Convert to Integer */
int Fixed::toInt( void ) const
{
    int retValue = _valueFixedPoint >> _numberFractionalBit;
    return (retValue);
}

/* Convert to Float */
float   Fixed::toFloat( void ) const
{
    float retValue = _valueFixedPoint / (float)(1 << _numberFractionalBit);
    return ( retValue );
}

std::ostream &operator<<(std::ostream& outputStr, const Fixed &obj)
{
        outputStr << obj.toFloat();
        return ( outputStr );
}



