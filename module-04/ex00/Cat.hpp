/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:27:42 by microdri          #+#    #+#             */
/*   Updated: 2023/06/29 17:17:30 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	public:

		Cat( void );
		Cat( const Cat &copy );
		Cat &operator=( const Cat &other );
		virtual ~Cat( void );

		void makeSound( void ) const;

	protected:
	
		std::string type;

};

#endif
