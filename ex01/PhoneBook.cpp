/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:33:30 by microdri          #+#    #+#             */
/*   Updated: 2023/05/16 14:56:57 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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

	std::cout << "Escreva seu Primeiro nome: " << std::endl;
	std::getline ( std::cin, input );
	this->person[indexPerson].setFirstName(input);
	std::cout << "Escreva o Sobrenome: " << std::endl;
	std::getline ( std::cin, input );
	input.clear();
	this->person[indexPerson].setLastName(input);
	this->indexPerson += 1;
	return ;
}

