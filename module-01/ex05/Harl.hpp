/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:35:51 by microdri          #+#    #+#             */
/*   Updated: 2023/05/24 13:53:42 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
    public:
        Harl( void );
        ~Harl( void );

        void complain( std::string level );
        typedef void (Harl::*pFn)(void);
        pFn pFnArray[4];

    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
      
};

#endif