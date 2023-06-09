/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:19:22 by microdri          #+#    #+#             */
/*   Updated: 2023/05/25 12:09:39 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie *zombieHorde( int N, std::string name );

int main()
{
	int index = 1;
	
	if ( index < 0 )
		return (0);
	Zombie *tmp = zombieHorde(index, "Malvo");
	
	for (int i = 0; i < index; i++)
		tmp[i].announce();
	delete[] tmp;
}
