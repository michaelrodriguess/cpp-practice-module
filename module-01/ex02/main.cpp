/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:55:36 by microdri          #+#    #+#             */
/*   Updated: 2023/05/23 14:44:23 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string water = "HI THIS IS BRAIN."; 
	std::string *stringPTR = &water;
	std::string &stringREF = water;

	std::cout << "value of memory address of string water is ->: " << &water << std::endl;
	std::cout << "value of memory address of stringPTR is ->: " << &stringPTR << std::endl;
	std::cout << "value of memory address of stringREF is ->: " << &stringREF << std::endl;

	std::cout << "value of string water is ->: " << water << std::endl;
	std::cout << "value of pointer stringPTR is: "<< stringPTR << std::endl;
	std::cout << "value of pointer stringRED is: " << stringREF << std::endl;
}
