/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:19:54 by microdri          #+#    #+#             */
/*   Updated: 2023/06/22 16:17:21 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* default constructor */
ScavTrap::ScavTrap(void) : ClapTrap()
{
    this->_name = "Aristolis";
    this->_health = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

/* destructor */
ScavTrap::~ScavTrap(void)
{
    std::cout << "destructor called" << std::endl;
}

/* constructor that gets the name in the parameters */
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_name = name;
    this->_health = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap constructor that gets the name in the parameters called" << std::endl;
}

/* copy constructor */
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

/* Overload operator */
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    this->_name = other._name;
    this->_health = other._health;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    std::cout << " ScavTrapCopy assignment operator called" << std::endl;
    return (*this);
}