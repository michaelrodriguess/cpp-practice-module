/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:27:25 by microdri          #+#    #+#             */
/*   Updated: 2023/06/29 20:48:31 by microdri         ###   ########.fr       */
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

	protected:
	
		std::string type;

	private:
		
		Brain *_dogBrain;

};

#endif
