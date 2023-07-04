/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:27:42 by microdri          #+#    #+#             */
/*   Updated: 2023/07/03 21:10:48 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:

		Cat( void );
		Cat( const Cat &copy );
		Cat &operator=( const Cat &other );
		virtual ~Cat( void );

		void makeSound( void ) const;

	private:

		Brain *_catBrain;

};

#endif
