/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:06:57 by microdri          #+#    #+#             */
/*   Updated: 2023/05/16 18:06:49 by microdri         ###   ########.fr       */
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
		std::cout << "		\033[33mPhoneBook\033[0m" << std::endl;
		std::cout << "comand \033[32m<ADD>\033[0m to adding contact in your PhoneBook" << std::endl;
		std::cout << "comand \033[32m<SEARCH>\033[0m to search a contact in your PhoneBook" << std::endl;
		std::cout << "comand \033[31m<EXIT>\033[0m to exit your PhoneBook" << std::endl;

		std::getline (std::cin, line);	
		if (line == "EXIT")
			break ;
		else if ( line == "ADD" )
			instancePhoneBook.add();
		else if ( line == "SEARCH")
			instancePhoneBook.search();
	}
	return 0;
}
