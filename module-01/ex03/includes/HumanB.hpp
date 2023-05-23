/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:38:33 by microdri          #+#    #+#             */
/*   Updated: 2023/05/23 17:57:40 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
    public:
        HumanB( std::string name );
        ~HumanB( void );

        void    attack( void );
        void    setWeapon( Weapon weaponType );

    private:
        std::string _name;
        Weapon *_weaponType;

};

#endif