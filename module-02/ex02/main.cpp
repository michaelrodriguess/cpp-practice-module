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
    Fixed a(10.5f);
    Fixed b(10.25f);
    Fixed c = a + b;
        std::cout << "RESULTADO DA SOMA ENTRE A E B É: " << c << std::endl;
    Fixed d = a - b;
        std::cout << "RESULTADO DA SUBTRACAO ENTRE A E B É: " << d << std::endl;
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
        std::cout << "A É DIFERENTE B" << std::endl;
    
    
}
