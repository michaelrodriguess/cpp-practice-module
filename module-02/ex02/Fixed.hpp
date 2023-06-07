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

class Fixed
{
   public:
        Fixed( void );
        Fixed( const int valueInt );
        Fixed( const float valueFloat );
        Fixed( const Fixed &fixedCopy);
        Fixed &operator=( const Fixed &fixedType);
        bool operator>( const Fixed &fixedType);
        ~Fixed( void );

        void setRawBits( int const raw );
        int getRawBits( void ) const;

   private: 
      int _valueFixedPoint;
      static const int _numberFractionalBit = 8;
      
};

#endif