/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:19:22 by microdri          #+#    #+#             */
/*   Updated: 2023/05/22 19:42:01 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie *zombieHorde( int N, std::string name );

int main()
{
	int index = 10;

	Zombie *tmp = zombieHorde(index, "Malvo");
	
	for (int i = 0; i < index; i++)
		tmp[i].announce();
	delete[] tmp;
}
