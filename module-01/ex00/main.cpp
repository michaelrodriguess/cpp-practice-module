/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:20:40 by microdri          #+#    #+#             */
/*   Updated: 2023/05/22 19:14:32 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"


/*
 * Retorna um ponteiro de Classe malocada, 
 * Podendo assim usar da forma que achar necessario fora do escopo da funcao
 * Tenho que usar delete (keyword/palavra reservada) depois do uso para liberar a memoria. 
 */

Zombie	*newZombie( std::string name ); 

/*
 * Aloca um objeto da Classe 
 * Este objeto é desalocado quando o escopo da funcao chega ao fim.
 */

void	randomChump( std::string name );

int main()
{
	Zombie *tmp;

	tmp = newZombie("zombieNew");	
	tmp->announce();

	randomChump("zombieRandom");	
	delete tmp;
}
