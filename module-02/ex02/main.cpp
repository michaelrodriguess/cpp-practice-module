/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:12:19 by microdri          #+#    #+#             */
/*   Updated: 2023/06/07 15:45:37 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
  /*Fixed a(10);
    Fixed b(5);
    Fixed c = a + b;
        std::cout << "RESULTADO DA SOMA ENTRE A E B É: " << c << std::endl;
    Fixed d = a - b;
        std::cout << "RESULTADO DA SUBTRACAO ENTRE A E B É: " << d << std::endl;
    Fixed e = a * b;
        std::cout << "RESULTADO DA MULTIPLICACAO ENTRE A E B É: " << e << std::endl;
    Fixed f = a / b;
        std::cout << "RESULTADO DA DIVISAO ENTRE A E B É: " << f << std::endl;
    a++;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    a--;
    std::cout << a << std::endl;
    std::cout << --a << std::endl;

    if (a > b)
        std::cout << "A É MAIOR QUE B" << std::endl;
    if (a < b)
        std::cout << "A É MENOR QUE B" << std::endl;
    if (a >= b)
        std::cout << "A É MAIOR OU IGUAL B" << std::endl;
    if (a <= b)
        std::cout << "A É MENOR OU IGUAL B" << std::endl;
    if (a == b)
        std::cout << "A É IGUAL B" << std::endl;
    if (a != b)
        std::cout << "A É DIFERENTE B" << std::endl; */

    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;
    
}
