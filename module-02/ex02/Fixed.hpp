/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:12:13 by microdri          #+#    #+#             */
/*   Updated: 2023/06/07 15:46:59 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
   public:
      Fixed( void );
      Fixed( const int valueInt );
      Fixed( const float valueFloat );
      Fixed( const Fixed &fixedCopy);
      virtual ~Fixed( void );

      Fixed &operator=( const Fixed &fixedType );
      
      bool operator>( const Fixed &fixedType );
      bool operator<( const Fixed &fixedType );
      bool operator>=( const Fixed &fixedType );
      bool operator<=( const Fixed &fixedType );
      bool operator==( const Fixed &fixedType );
      bool operator!=( const Fixed &fixedType );

      Fixed operator+( const Fixed &fixedType );
      Fixed operator-( const Fixed &fixedType );
      Fixed operator*( const Fixed &fixedType );
      Fixed operator/( const Fixed &fixedType );

      Fixed &operator++( void );
      Fixed operator++( int );
      Fixed &operator--( void );
      Fixed operator--( int );

      static Fixed &min(Fixed &a, Fixed &b);
      static Fixed min(const Fixed a, const Fixed b);
      static Fixed &max(Fixed &a, Fixed &b);
      static Fixed max(const Fixed a, const Fixed b);
      
      float   toFloat( void ) const;
      int     toInt( void ) const;

      void setRawBits( int const raw );
      int getRawBits( void ) const;

   private: 
      int _rawValue;
      static const int _numberFractionalBit = 8;
      
};

std::ostream &operator<<(std::ostream& outputStr, const Fixed &obj);


#endif