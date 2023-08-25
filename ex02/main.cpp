/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:22:15 by sbadr             #+#    #+#             */
/*   Updated: 2023/08/23 14:22:16 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string var = "HI THIS IS BRAIN";
    std::string *stringPTR;
    std::string &stringREF = var;

    stringPTR = &var;
    std::cout << "The memory address of the string variable:" <<&var << std::endl;
    std::cout << "The memory address held by stringPTR:" <<&stringPTR << std::endl;
    std::cout << "The memory address held by stringREF:" <<&stringREF << std::endl;

    std::cout << "The value of the string variable:" <<var << std::endl;
    std::cout << "The value pointed to by stringPTR:" <<stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF:" <<stringREF << std::endl;
}