/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:12:08 by microdri          #+#    #+#             */
/*   Updated: 2023/06/07 15:48:33 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* default constructor */
Fixed::Fixed( void )
{
    this->_valueFixedPoint = 0;
    std::cout << "default constructor called" << std::endl;
}

/* destructor */
Fixed::~Fixed( void )
{
    std::cout << "destructor called" << std::endl;
}

/*copy constructor */
Fixed::Fixed( const Fixed &fixedCopy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixedCopy;
}

/* Overloads operators */
Fixed& Fixed::operator=( const Fixed &fixedType)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_valueFixedPoint =  fixedType.getRawBits();
    return *this;
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


bool Fixed::operator>( const Fixed &fixedType)
{
    if (!( this->_valueFixedPoint > fixedType._valueFixedPoint ))
        return ( false );
    return ( true );
}


/* Member Functios of Class Fixed */
void Fixed::setRawBits( int const raw )
{
    this->_valueFixedPoint = raw;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return ( this->_valueFixedPoint );
}
