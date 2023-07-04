/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:25:59 by microdri          #+#    #+#             */
/*   Updated: 2023/07/03 20:15:41 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:

		WrongAnimal( void );
		WrongAnimal( std::string type );
		WrongAnimal( const WrongAnimal &copy );
		WrongAnimal &operator=( const WrongAnimal &other );
		virtual ~WrongAnimal( void );

		std::string getType( void ) const;
		void makeSound( void ) const;

	protected:
	
		std::string type;
};

#endif
