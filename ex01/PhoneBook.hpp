/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:33:49 by microdri          #+#    #+#             */
/*   Updated: 2023/05/16 14:35:14 by microdri         ###   ########.fr       */
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
		void search(int index);
		void exit(void);

	private:

		int indexPerson;
};

#endif
