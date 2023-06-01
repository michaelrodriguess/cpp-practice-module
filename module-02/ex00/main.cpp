/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:23:31 by microdri          #+#    #+#             */
/*   Updated: 2023/05/26 13:36:29 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

int main()
{
    /*
    Fixed instance1;

    instance1.setRawBits(2);
    Fixed intance2(instance1);
    intance2 = instance1;
    std::cout << &instance1 << " " << instance1.getRawBits() << std::endl;
    std::cout << &intance2 << " " << intance2.getRawBits() << std::endl;
    */

   {
        Fixed a;
        Fixed b( a );
        Fixed c;
        
        c = b;
        std::cout << a.getRawBits() << std::endl;
        std::cout << b.getRawBits() << std::endl;
        std::cout << c.getRawBits() << std::endl;
   }
}