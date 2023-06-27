/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:12:17 by microdri          #+#    #+#             */
/*   Updated: 2023/06/26 17:11:24 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* default constructor */
ClapTrap::ClapTrap(void)
{
    this->_name = "Aristolis clap";
    this->_health = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << "ClapTrap default constructor called" << std::endl;
}

/* destructor */
ClapTrap::~ClapTrap( void )
{
    std::cout << "ClapTrap " << this->_name << " destructor called" << std::endl;
}

/* constructor that gets the name in the parameters */
ClapTrap::ClapTrap( std::string name )
{
    this->_name = name;
    this->_health = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << "ClapTrap " << this->_name << " constructor called" << std::endl;
}

/* copy constructor */
ClapTrap::ClapTrap( const ClapTrap &copy )
{
    this->_name  = copy._name;
    this->_health = copy._health;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    std::cout << "ClapTrap Copy constructor called" << std::endl;
}

/* Overload operator */
ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    this->_name = other._name;
    this->_health = other._health;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    return ( *this );
}

/* Member Functions */
void ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints <= 0 || this->_health <= 0)
        std::cout << this->_name
            << " failed to attack " <<
            target << "." << std::endl;

    if ( this->_energyPoints > 0 && this->_health > 0 )
    {
        std::cout << "ClapTrap " << this->_name  << " attacks " 
        << target << ", causing " << this->_attackDamage 
        << " points of damage!" << std::endl;
        this->_energyPoints -= 1;
    }
    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount >= this->_health)
        this->_health = 0;
    if (this-> _health <= 0 )
    {
        std::cout << this->_name << " is dead" << std::endl;
    }
    if ( this->_health > 0 )
    {
        this->_health -= amount;
        std::cout << "ClapTrap " << this->_name 
            << " take damage of " << amount << ", and got " 
            << this->_health << " of health." << std::endl;
    }

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints <= 0 || this->_health <= 0)
        std::cout << "Impossible " << this->_name
            << " be repaired." << std::endl;

    if ( this->_energyPoints > 0 && this->_health > 0 )
    {
        this->_health += amount;
        this->_energyPoints -= 1;
        std::cout << "ClapTrap " << this->_name
           << " be repaired " << amount << ", and got "
            << this->_health << " of health." << std::endl;
    }
    
}
