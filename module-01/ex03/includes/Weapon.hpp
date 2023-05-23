/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:16:08 by microdri          #+#    #+#             */
/*   Updated: 2023/05/23 18:10:19 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
    public:
       Weapon( std::string value );
        ~Weapon( void );

        const std::string& getType( void );
        void    setType( std::string value );
        
    private:
        std::string _type;

};



#endif