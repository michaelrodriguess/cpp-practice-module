/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:25:59 by microdri          #+#    #+#             */
/*   Updated: 2023/07/04 12:57:51 by microdri         ###   ########.fr       */
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

#endif /* WRONGANIMAL_HPP */
