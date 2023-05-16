/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:06:57 by microdri          #+#    #+#             */
/*   Updated: 2023/05/16 14:57:56 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{

	PhoneBook 	instancePhoneBook;
	std::string line;

	while (42)
	{
		std::getline (std::cin, line);	
		if (line == "EXIT")
			break ;
		else if ( line == "ADD" )
			instancePhoneBook.add();
		else if ( line == "SEARCH")
		{
			std::cout << "look that firstName: " << instancePhoneBook.person[0].getFirstName() << std::endl;
			std::cout << "look that lastName: " << instancePhoneBook.person[0].getLastName() << std::endl;
		}
	}
	return 0;
}
