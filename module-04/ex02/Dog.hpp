/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:27:25 by microdri          #+#    #+#             */
/*   Updated: 2023/07/03 21:10:54 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:

		Dog( void );
		Dog( const Dog &copy );
		Dog &operator=( const Dog &other );
		virtual ~Dog( void );

		void makeSound( void ) const;

	private:
		
		Brain *_dogBrain;

};

#endif
