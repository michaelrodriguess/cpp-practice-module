/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:24:55 by microdri          #+#    #+#             */
/*   Updated: 2023/06/29 18:39:29 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:

		Animal( void );
		Animal( std::string type );
		Animal( const Animal &copy );
		Animal &operator=( const Animal &other );
		virtual ~Animal( void );

		std::string getType( void ) const;
		virtual void makeSound( void ) const;

	protected:
	
		std::string type;

};

#endif
