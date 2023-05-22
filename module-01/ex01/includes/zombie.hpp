/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:22:41 by microdri          #+#    #+#             */
/*   Updated: 2023/05/22 19:34:53 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	public:

		Zombie( void );
		~Zombie( void );

		void announce( void );
		void setNameZombie( std::string value );

	private:

		std::string NameZombie;

};
#endif
