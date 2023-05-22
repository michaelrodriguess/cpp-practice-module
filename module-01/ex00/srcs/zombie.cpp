/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:22:38 by microdri          #+#    #+#             */
/*   Updated: 2023/05/22 18:46:11 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie( std::string name ) : NameZombie( name )
{
	std::cout << this->NameZombie << ": Constructor called" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << this->NameZombie << ": Destructor called" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << this->NameZombie << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}
