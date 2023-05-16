/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:26:04 by microdri          #+#    #+#             */
/*   Updated: 2023/05/16 14:47:52 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact
{
	public:
		
		Contact( void );
		~Contact( void );
	
		void 		setFirstName( std::string value );
		std::string getFirstName( void );
		void 		setLastName( std::string value );
		std::string getLastName( void );

	private:

		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;

};

#endif
