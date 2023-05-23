/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:22:38 by microdri          #+#    #+#             */
/*   Updated: 2023/05/23 10:39:22 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie( void )
{
	std::cout << this->NameZombie << "Constructor called" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << this->NameZombie << ": Destructor called" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << this->NameZombie << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setNameZombie( std::string value )
{
	this->NameZombie = value;
}
