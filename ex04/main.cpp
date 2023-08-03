#include <fstream>
#include <string>
#include <iostream>
#include <stdio.h>

std::string ft_replace(std::string highstack, std::string s1, std::string s2)
{
	size_t pos = 0;
	size_t s1_len;
	while((pos = highstack.find(s1, pos)) != std::string::npos){
		s1_len = s1.length();
		highstack = highstack.substr(0, pos) + s2\
		+ highstack.substr(pos + s1_len, highstack.length() - pos + s1_len);
		pos++;
	}
	return highstack;
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string fileof;
		std::string fileread;

		fileof = av[1];
		std::ifstream ifs(av[1]);
		if (!ifs.is_open())
		{
			std::cout << "std::cout<< error opening file!\n" << "Remember :: argv1 :file path | argv2 : s1 | argv3 : s2"<< std::endl;
			return 0;
		}
		std::ofstream ofs(fileof + ".replace");
		while (std::getline(ifs, fileread))
		{
			ofs << ft_replace(fileread, av[2], av[3]);
			ofs << '\n';
		}
	}
	else
		std::cout<< "wrong number of arguments!\n";
}