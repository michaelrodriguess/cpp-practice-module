/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:33:30 by microdri          #+#    #+#             */
/*   Updated: 2023/05/22 15:49:33 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void )
{
	std::cout << "PhoneBook Constructor called" << std::endl;
	this->indexPerson = 0;
	this->oldIndexPerson = 0;
	return ;
}

PhoneBook::~PhoneBook( void )
{
	std::cout << "PhoneBook Destructor called" << std::endl;
}

void PhoneBook::add( void )
{
	std::string input;

	if (indexPerson == 8)
		oldIndexPerson = 0;
	while (input.empty() && !std::cin.eof())
	{
		std::cout << "write your first name below:" << std::endl;
		std::getline( std::cin, input );
		this->person[oldIndexPerson].setFirstName(input);
	}
	input.clear();
	while (input.empty() && !std::cin.eof())
	{
		std::cout << "write your last name below:" << std::endl;
		std::getline( std::cin, input );
		this->person[oldIndexPerson].setLastName(input);
	}
	input.clear();
	while (input.empty() && !std::cin.eof())
	{
		std::cout << "write your nickname below:" << std::endl;
		std::getline( std::cin, input );
		this->person[oldIndexPerson].setNickname(input);
	}
	input.clear();
	while (input.empty() && !std::cin.eof())
	{
		std::cout << "write your phone number below:" << std::endl;
		std::getline( std::cin, input );
		this->person[oldIndexPerson].setPhoneNumber(input);
	}
	input.clear();
	while (input.empty() && !std::cin.eof())
	{
		std::cout << "write your darkest secret below:" << std::endl;
		std::getline( std::cin, input);
		this->person[oldIndexPerson].setDarkestSecret(input);
	}
	this->oldIndexPerson += 1;
	if (this->indexPerson < 8)
		this->indexPerson += 1;	
	return ;
}

std::string PhoneBook::cutString( std::string str )
{
	std::string formatStr;

	if (str.length() > 10)
		formatStr = str.substr( 0, 9 ) + ".";
	else
		formatStr = str;
	return ( formatStr );
}

bool isNumeric(std::string str)
{
    for (size_t i = 0; i < str.length(); ++i) 
	{
        if (str[i] < '0' || str[i] > '9' )
            return false;
    }
    return true;
}

void	PhoneBook::search( void )
{
	
	std::string input;

	std::cout << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "FirstName" << "|";
	std::cout << std::setw(10) << "LastName" << "|";
	std::cout << std::setw(10) << "NickName" << "|";
	std::cout << std::setw(10) << "PhoneNumb." << "|" << std::endl;
	std::cout << "----------|----------|----------|----------|----------|" << std::endl;
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
	if (input.empty())
		return ;
	if ( isNumeric( input ) )
		i = std::stoi(input);
	else
		return ;
	if ( i < indexPerson && oldIndexPerson >= 0 )
	{
		std::cout << "Index: " << i << std::endl;
		std::cout << "First Name: " << this->person[i].getFirstName() << std::endl;
		std::cout << "Last Name: " << this->person[i].getLastName() << std::endl;
 		std::cout << "Nickname: " << this->person[i].getNickname() << std::endl;
		std::cout << "Phone Number: " << this->person[i].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << this->person[i].getDarkestSecret() << std::endl;
	}
}

