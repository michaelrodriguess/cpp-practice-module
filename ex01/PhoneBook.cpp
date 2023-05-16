/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:33:30 by microdri          #+#    #+#             */
/*   Updated: 2023/05/16 18:06:45 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>

PhoneBook::PhoneBook( void )
{
	//std::cout << "PhoneBook Constructor called" << std::endl;
	this->indexPerson = 0;
	return ;
}

PhoneBook::~PhoneBook( void )
{
//	std::cout << "PhoneBook Destructor called" << std::endl;
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
	this->indexPerson += 1;
	
	return ;
}

void	PhoneBook::search( void )
{
	
	std::string input;

	for (int i = 0; i < indexPerson; i++)
	{
		std::cout << this->person[i].getFirstName() << std::endl;
		std::cout << this->person[i].getLastName() << std::endl;
 		std::cout << this->person[i].getNickname() << std::endl;
		std::cout << this->person[i].getPhoneNumber() << std::endl;
		std::cout << this->person[i].getDarkestSecret() << std::endl;
	} //  ajeitar do jeito que o pdf pede!

	// tentar printar quando escolhe o numero a pessoa que quer no phonenumber
	int i = 0;
	std::cout << "which number do you need" << std::endl;
	std::getline( std::cin, input);
	i = std::stoi(input);
	if (i == indexPerson)
	{
		std::cout << this->person[indexPerson].getFirstName() << std::endl;
		std::cout << this->person[indexPerson].getLastName() << std::endl;
 		std::cout << this->person[indexPerson].getNickname() << std::endl;
		std::cout << this->person[indexPerson].getPhoneNumber() << std::endl;
		std::cout << this->person[indexPerson].getDarkestSecret() << std::endl;
	}
}

