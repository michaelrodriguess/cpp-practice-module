/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:26:04 by microdri          #+#    #+#             */
/*   Updated: 2023/05/16 17:06:37 by microdri         ###   ########.fr       */
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
		void 		setLastName( std::string value );
		void 		setNickname( std::string value );
		void 		setPhoneNumber( std::string value );
		void 		setDarkestSecret( std::string value );
		std::string getFirstName( void );
		std::string getLastName( void );
		std::string getNickname( void );
		std::string getPhoneNumber( void );
		std::string getDarkestSecret( void );

	private:

		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;

};

#endif
