/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:02:27 by microdri          #+#    #+#             */
/*   Updated: 2023/05/16 17:15:09 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Constructor and Destructor

Contact::Contact( void )
{
//	std::cout << "Contact Constructor called" << std::endl;
	return ;
}

Contact::~Contact( void )
{
//	std::cout << "Contact Destructor called" << std::endl;
}

// Setters
 
void	Contact::setFirstName( std::string value )
{
	this->firstName = value;
}

void Contact::setLastName( std::string value )
{
	this->lastName = value;
}

void Contact::setNickname( std::string value )
{
	this->nickname = value;
}

void Contact::setPhoneNumber( std::string value )
{
	this->phoneNumber = value;
}

void Contact::setDarkestSecret( std::string value )
{
	this->darkestSecret = value;
}

// Getters

std::string Contact::getNickname( void )
{
	return( this->nickname );
}

std::string Contact::getFirstName( void )
{
	return( this->firstName );
}

std::string Contact::getLastName( void )
{
	return( this->lastName );
}

std::string Contact::getPhoneNumber( void )
{
	return( this->phoneNumber );
}

std::string Contact::getDarkestSecret( void )
{
	return( this->darkestSecret );
}
