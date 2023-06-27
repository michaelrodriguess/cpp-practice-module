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
    this->_rawValue = 0;
    //std::cout << "default constructor called" << std::endl;
}

/* Constructor that takes a value of int in the arguments */
Fixed::Fixed( const int valueInt )
{
    //std::cout << "Constructor int called" << std::endl;
    this->_rawValue = valueInt << _numberFractionalBit ;
}

/* Constructor that takes a value of float in the arguments */
Fixed::Fixed( const float valueFloat )
{
    //std::cout << "Constructor float called" << std::endl;
    this->_rawValue = roundf(valueFloat * (1 << _numberFractionalBit));
}

/*copy constructor */
Fixed::Fixed( const Fixed &fixedCopy)
{
    //std::cout << "Copy constructor called" << std::endl;
    this->_rawValue = fixedCopy.getRawBits();
}

/* destructor */
Fixed::~Fixed( void )
{
    //std::cout << "destructor called" << std::endl;
}

/* Overloads operators */
Fixed& Fixed::operator=( const Fixed &fixedType)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    this->_rawValue =  fixedType.getRawBits();
    return ( *this );
}

std::ostream &operator<<(std::ostream& outputStr, const Fixed &obj)
{
        outputStr << obj.toFloat();
        return ( outputStr );
}

bool Fixed::operator>( const Fixed &fixedType) const
{
    //std::cout << "Conditional > operator called" << std::endl;
    if ( this->getRawBits() > fixedType.getRawBits())
        return ( true );
    return ( false );
}

bool Fixed::operator<( const Fixed &fixedType) const
{
    //std::cout << "Conditional < operator called" << std::endl;
    if ( this->getRawBits() < fixedType.getRawBits())
        return ( true );
    return ( false );
}

bool Fixed::operator>=( const Fixed &fixedType) const
{
    //std::cout << "Conditional >= operator called" << std::endl;
    if ( this->getRawBits() >= fixedType.getRawBits())
        return ( true );
    return ( false );
}

bool Fixed::operator<=( const Fixed &fixedType) const
{
    //std::cout << "Conditional >= operator called" << std::endl;
    if ( this->getRawBits() <= fixedType.getRawBits())
        return ( true );
    return ( false );
}

bool Fixed::operator==( const Fixed &fixedType) const
{
    //std::cout << "Conditional >= operator called" << std::endl;
    if ( this->getRawBits() == fixedType.getRawBits())
        return ( true );
    return ( false );
}

bool Fixed::operator!=( const Fixed &fixedType) const
{
    //std::cout << "Conditional >= operator called" << std::endl;
    if ( this->getRawBits() != fixedType.getRawBits())
        return ( true );
    return ( false );
}

Fixed Fixed::operator+(const Fixed &fixedType)
{

    Fixed tmp( this->getRawBits() );
    tmp.setRawBits(this->getRawBits() + fixedType.getRawBits());

    return ( tmp );
}

Fixed Fixed::operator-(const Fixed &fixedType)
{

    Fixed tmp( this->getRawBits() );
    tmp.setRawBits(this->getRawBits() - fixedType.getRawBits());

    return ( tmp );
}

Fixed Fixed::operator*(const Fixed &fixedType)
{
    Fixed tmp( this->getRawBits() );
    int value1 = this->getRawBits();
    int value2 = fixedType.getRawBits();  

    tmp.setRawBits((value1 * value2) >> _numberFractionalBit);
    return( tmp );
}

Fixed Fixed::operator/(const Fixed &fixedType)
{
    Fixed tmp( this->getRawBits() );
    int value1 = this->getRawBits();
    int value2 = fixedType.getRawBits();

    tmp.setRawBits( (value1 / value2) << _numberFractionalBit);
    return( tmp );
}

Fixed &Fixed::operator++( void ) //pre
{
    this->_rawValue += 1;
    return ( *this );
}

Fixed Fixed::operator++( int ) //pos 
{
    Fixed tmp( *this );
    this->_rawValue += 1;
    return (tmp);
}

Fixed &Fixed::operator--( void ) //pre
{
    this->_rawValue--;
    return ( *this );
}

Fixed Fixed::operator--( int ) //pos 
{
    Fixed tmp( *this );
    this->_rawValue--;
    return (tmp);
}


/* Member Functios of Class Fixed */
void Fixed::setRawBits( int const raw )
{
    this->_rawValue = raw;
}

int Fixed::getRawBits( void ) const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return ( this->_rawValue );
}

/* Convert to Integer */
int Fixed::toInt( void ) const
{
    int retValue = _rawValue >> _numberFractionalBit;
    return (retValue);
}

/* Convert to Float */
float   Fixed::toFloat( void ) const
{
    float retValue = _rawValue / (float)(1 << _numberFractionalBit);
    return ( retValue );
}

Fixed &Fixed::min(Fixed &a, Fixed &b) 
{
    if ( a > b )
        return (b);
    return (a);
}

Fixed Fixed::min( const Fixed a, const Fixed b )
{
    if ( a > b )
        return (b);
    return (a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) 
{
    if ( a > b )
        return (a);
    return (b);
}

Fixed Fixed::max( const Fixed a, const Fixed b )
{
    if ( a > b )
        return (a);
    return (b);
}