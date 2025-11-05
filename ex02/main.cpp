/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:12:19 by carbon-m          #+#    #+#             */
/*   Updated: 2025/11/01 16:47:10 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Adress of the string: " << &string << std::endl;
	std::cout << "Adress of the pointer: " << stringPTR << std::endl;
	std::cout << "Adress of the reference: " << &stringREF << std::endl;

	std::cout << "Value of the string: " << string << std::endl;
	std::cout << "Value pointed to by pointer: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by reference: " << stringREF << std::endl;
};