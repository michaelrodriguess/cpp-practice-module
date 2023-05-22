/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:21:21 by microdri          #+#    #+#             */
/*   Updated: 2023/05/22 19:47:28 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
	Zombie *nameZombies = new Zombie[N];
	
	for (int i = 0; i < N; i++)	
		nameZombies[i].setNameZombie( name );
	return ( nameZombies );
}
