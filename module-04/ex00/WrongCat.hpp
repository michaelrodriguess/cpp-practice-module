/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:29:40 by microdri          #+#    #+#             */
/*   Updated: 2023/06/29 19:10:03 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:

		WrongCat( void );
		WrongCat( const WrongCat &copy );
		WrongCat &operator=( const WrongCat &other );
		virtual ~WrongCat( void );

		void makeSound( void ) const;

	protected:
	
		std::string type;

};

#endif
