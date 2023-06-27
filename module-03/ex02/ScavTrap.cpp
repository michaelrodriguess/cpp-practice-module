/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:19:54 by microdri          #+#    #+#             */
/*   Updated: 2023/06/26 17:11:06 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

/* default constructor */
ScavTrap::ScavTrap(void) : ClapTrap()
{
    this->_name = "Aristolis scav";
    this->_health = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

/* destructor */
ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << this->_name << " destructor called." << std::endl;
}

/* constructor that gets the name in the parameters */
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_health = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap " << this->_name << " constructor called." << std::endl;
}

/* copy constructor */
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

/* Overload operator */
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    ClapTrap::operator=(other);
    std::cout << " ScavTrap Copy assignment operator called" << std::endl;
    return (*this);
}

/* Member Functions */
void    ScavTrap::guardGate( void )
{
    std::cout << "ScavTrap " << this->_name << " now is in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_energyPoints <= 0 || this->_health <= 0)
        std::cout << this->_name
            << " failed to attack " <<
            target << "." << std::endl;

    if ( this->_energyPoints > 0 && this->_health > 0 )
    {
        std::cout << "ScavTrap " << this->_name  << " attacks " 
        << target << ", causing " << this->_attackDamage 
        << " points of damage!" << std::endl;
        this->_energyPoints -= 1;
    }
    
}