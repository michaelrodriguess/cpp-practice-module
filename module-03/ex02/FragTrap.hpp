/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:51:38 by microdri          #+#    #+#             */
/*   Updated: 2023/06/27 18:02:55 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP 

class FragTrap : public ClapTrap
{
	public: 
		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( const FragTrap &copy );
		FragTrap &operator=( const FragTrap &other );
		virtual ~FragTrap();

		void highFivesGuys( void );
}

#endif 
