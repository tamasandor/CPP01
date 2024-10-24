/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:06:25 by atamas            #+#    #+#             */
/*   Updated: 2024/10/24 16:12:35 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	std::ifstream	inputFile;
	std::ofstream	outputFile;
	std::string		s;
	size_t			found;

	if (argc != 4)
	{
		std::cerr << "Wrongly formatted arguments!\n" << "Correct way is ./sed needle replacement filename\n";
		return (1);
	}
	std::string		needle = argv[1];
	std::string		inputFileName = argv[argc - 1];
	std::string		outputFileName = inputFileName + ".replace";
	inputFile.open(inputFileName.c_str());
	if (!inputFile.is_open())
	{
		std::cerr << "Unable to open the file" << std::endl;
		return (1);
	}
	outputFile.open(outputFileName.c_str());
	if (!outputFile.is_open())
	{
		std::cerr << "Unable to open the file" << std::endl;
		return (1);
	}
	while (getline(inputFile, s))
	{
		found = s.find(needle);
		while (found != std::string::npos)
		{
			s = s.substr(0, found) + argv[2] + s.substr(found + needle.length(), s.length());
			found = s.find(needle.c_str());
		}
		outputFile << s << '\n';
		s.clear();
	}
	inputFile.close();
	outputFile.close();
}