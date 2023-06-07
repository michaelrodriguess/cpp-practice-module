/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:11:14 by microdri          #+#    #+#             */
/*   Updated: 2023/06/07 11:06:58 by microdri         ###   ########.fr       */
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
        ~Fixed( void );

        float   toFloat( void ) const;
        int     toInt( void ) const;
        int     getValue( void ) const;


    private:
        int _valueFixedPoint;
        static const int _numberFractionalBit = 8;
};

std::ostream &operator<<(std::ostream& outputStr, const Fixed &obj);


#endif
