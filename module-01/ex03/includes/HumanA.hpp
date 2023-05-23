/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:36:21 by microdri          #+#    #+#             */
/*   Updated: 2023/05/23 18:44:46 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
    public:
        HumanA( std::string name, Weapon &weaponType );
        ~HumanA( void );

        void    attack( void );

    private:
        std::string _name;
        Weapon &_weaponType;

};

#endif
