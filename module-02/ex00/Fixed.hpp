/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:22:11 by microdri          #+#    #+#             */
/*   Updated: 2023/05/26 13:34:52 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed( void );
        Fixed( const Fixed &copy);
        Fixed &operator=( const Fixed &copy);
        ~Fixed( void );

        void setRawBits( int const raw );
        int getRawBits( void ) const;

    private:
        int _valueFixedPoint;
        static const int _numberFractionalBit = 8;
};


#endif