/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:20:38 by carbon-m          #+#    #+#             */
/*   Updated: 2025/11/06 17:04:08 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

void	replaceStrings(std::string &file, std::string s1, std::string s2)
{
	size_t	pos;

	while ((pos = file.find(s1)) != std::string::npos)
	{
		file.erase(pos, s1.length());
		file.insert(pos, s2);
		pos += s2.length();
	}
}

int main(int argc, char **argv)
{
	std::string	file;
	std::string	line;

	if(argc != 4 || !std::string (argv[1]).length() || !std::string (argv[2]).length() || !std::string (argv[3]).length())
	{
		std::cout << "-- Error --\n Usage: ./sedisforlosers <filename> <string_to_find> <string_to_replace>" << std::endl;
		return (1);
	}

	std::ifstream input(argv[1]);
	std::string outfile = (std::string(argv[1]) + ".replace");
	std::ofstream output(outfile.c_str());

	while (std::getline(input, line))
	{
		file += line;
		if(!input.eof())
			file += "\n";
	}
	replaceStrings(file, argv[2], argv[3]);
	output << file;
	
	input.close();
	output.close();
	return (0);
}
