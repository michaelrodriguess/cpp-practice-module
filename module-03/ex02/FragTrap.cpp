/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:32:37 by microdri          #+#    #+#             */
/*   Updated: 2023/06/28 14:58:02 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* Construtor default and Destructor */
FragTrap::FragTrap(void) : ClapTrap()
{
	this->_name = "Aristolis Frag";
	this->_health = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

/* Copy Constructor */
FragTrap::FragTrap( const FragTrap &copy ) : ClapTrap()
{
	*this = copy;
	std::cout << "FragTrap copy Contructor called" << std::endl;
}

/* Constructor that gets the name in the parameters */
FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	this->_health = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " constructor called" << std::endl;
}

/* Overload operator */
FragTrap &FragTrap::operator=( const FragTrap &other )
{
	ClapTrap::operator=(other);
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	return (*this);
}

/* Member Function */
void FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << this->_name << " get up hands for high fives." << std::endl;
}
