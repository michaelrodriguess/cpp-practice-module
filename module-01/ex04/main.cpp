/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:51:05 by microdri          #+#    #+#             */
/*   Updated: 2023/05/24 10:08:14 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string replace(const std::string s1, std::string s2, std::string buf)
{   
    size_t position = 0;

    position = buf.find(s1);
    while (position != std::string::npos)
    {
        buf.erase(position, s1.length());
        buf.insert(position, s2);
        position = buf.find(s1);
    }
    return (buf);
}

int main(int argc, char **argv)
{
    if (argc != 4)
        std::cout << "Wrong number of arguments." << std::endl;
    else
    {   
        std::ifstream fileInput;
        std::ofstream fileOutput;
        std::string filename = argv[1];
        const std::string str1 = argv[2];
        std::string str2 = argv[3];
        std::string buf;
        
        fileInput.open(argv[1]);
        fileOutput.open(filename+".replace");
        while ( getline(fileInput, buf) )
        {
            buf = replace(str1, str2, buf);   
            fileOutput << buf << std::endl;
        }
        fileInput.close();
        fileOutput.close();
    }
}