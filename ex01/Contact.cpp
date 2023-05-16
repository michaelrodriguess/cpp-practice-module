/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:02:27 by microdri          #+#    #+#             */
/*   Updated: 2023/05/16 14:50:21 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void )
{
	std::cout << "Contact Constructor called" << std::endl;
	return ;
}

Contact::~Contact( void )
{
	std::cout << "Contact Destructor called" << std::endl;
}

void	Contact::setFirstName( std::string value )
{
	this->firstName = value;
}

std::string Contact::getFirstName( void )
{
	return ( this->firstName );
}

void Contact::setLastName( std::string value )
{
	this->lastName = value;
}

std::string Contact::getLastName( void )
{
	return ( this->lastName );
}	
