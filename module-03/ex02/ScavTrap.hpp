/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:19:56 by microdri          #+#    #+#             */
/*   Updated: 2023/06/27 18:01:55 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
    
        ScavTrap();
        ScavTrap( std::string name );
        ScavTrap( const ScavTrap &copy );
        ScavTrap &operator=(const ScavTrap &other);
        virtual ~ScavTrap();

        void guardGate(); 
        void attack(const std::string& target);
      

};


#endif 
