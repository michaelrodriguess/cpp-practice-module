/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:33:49 by microdri          #+#    #+#             */
/*   Updated: 2023/05/22 11:22:49 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
	public:
		
		PhoneBook( void );
		~PhoneBook( void );
	
		Contact person[8];
		void add( void );
		void search( void );
		std::string cutString( std::string str );

	private:

		int indexPerson;
		int oldIndexPerson;
};

#endif
