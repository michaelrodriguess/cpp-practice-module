/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:33:30 by microdri          #+#    #+#             */
/*   Updated: 2023/05/19 17:30:50 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>
#include <iomanip>

PhoneBook::PhoneBook( void )
{
	std::cout << "PhoneBook Constructor called" << std::endl;
	this->indexPerson = 0;
	return ;
}

PhoneBook::~PhoneBook( void )
{
	std::cout << "PhoneBook Destructor called" << std::endl;
}

void PhoneBook::add( void )
{
	std::string input;

	while (input.empty())
	{
		std::cout << "write your first name below:" << std::endl;
		std::getline( std::cin, input );
		this->person[indexPerson].setFirstName(input);
	}
	input.clear();
	while (input.empty())
	{
		std::cout << "write your last name below:" << std::endl;
		std::getline( std::cin, input );
		this->person[indexPerson].setLastName(input);
	}
	input.clear();
	while (input.empty())
	{
		std::cout << "write your nickname below:" << std::endl;
		std::getline( std::cin, input );
		this->person[indexPerson].setNickname(input);
	}
	input.clear();
	while (input.empty())
	{
		std::cout << "write your phone number below:" << std::endl;
		std::getline( std::cin, input );
		this->person[indexPerson].setPhoneNumber(input);
	}
	input.clear();
	while (input.empty())
	{
		std::cout << "write your darkest secret below:" << std::endl;
		std::getline( std::cin, input);
		this->person[indexPerson].setDarkestSecret(input);
	}
	// limitar oito contator por aplicacao.
	this->indexPerson += 1;
	
	return ;
}

// metodo do phonebook onde vai retornar uma string cortada! se ela for maior que dez caracteres diz o guedes.

std::string PhoneBook::cutString( std::string str )
{
	std::string formatStr;

	if (str.length() > 10)
		formatStr = str.substr( 0, 9 ) + ".";
	return ( formatStr );
}

void	PhoneBook::search( void )
{
	
	std::string input;

	for (int i = 0; i < indexPerson; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << cutString(this->person[i].getFirstName()) << "|"; 
		std::cout << std::setw(10) << cutString(this->person[i].getLastName()) << "|";
 		std::cout << std::setw(10) << cutString(this->person[i].getNickname()) << "|";
		std::cout << std::setw(10) << cutString(this->person[i].getPhoneNumber()) << "|" << std::endl;
	}

	int i = 0;
	std::cout << "which number do you need: ";
	std::getline( std::cin, input );
	i = std::stoi(input);
	if ( i <= indexPerson && indexPerson >= 0 )
	{
		std::cout << "Index: " << i << std::endl;
		std::cout << "First Name: " << this->person[i].getFirstName() << std::endl;
		std::cout << "Last Name: " << this->person[i].getLastName() << std::endl;
 		std::cout << "Nickname: " << this->person[i].getNickname() << std::endl;
		std::cout << "Phone Number: " << this->person[i].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << this->person[i].getDarkestSecret() << std::endl;
	}
}

