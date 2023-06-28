/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:51:38 by microdri          #+#    #+#             */
/*   Updated: 2023/06/28 14:56:12 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP 

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public: 

		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( const FragTrap &copy );
		FragTrap &operator=( const FragTrap &other );
		virtual ~FragTrap();

		void highFivesGuys( void );
};

#endif 
