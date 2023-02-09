#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>

bool	inputValidate(int argc, char const **argv, std::string& filename, std::string& s1, std::string& s2)
{
	if (argc != 4)
	{
		std::cerr << "Incorrect amount of arguments. Please keep it to 3 arguments\n";
		return (false);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	return (true);
}

bool	openValidate(std::ifstream& in, std::ofstream& out)
{
	if (in.fail() || out.fail())
	{
		std::cerr << "Failed to open input and/or output file\n";
		return (false);
	}
	return (true);
}

void	replaceTarget(std::string& line, std::string s1, std::string s2)
{
	size_t	pos = 0;
	size_t	match = line.find(s1, pos);

	while (match != std::string::npos)
	{
		line.erase(match, s1.length());
		line.insert(match, s2);
		pos = match + s2.length();
		match = line.find(s1, pos);
	}
}

int	main(int argc, char const **argv)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;
	if (!inputValidate(argc, argv, filename, s1, s2))
		return (EXIT_FAILURE);
	
	std::ifstream in(filename);
	std::ofstream out(filename.append(".replace"));
	if (!openValidate(in, out))
		return (EXIT_FAILURE);
	
	std::string	line;
	while (!in.eof())
	{
		std::getline(in, line);
		replaceTarget(line, s1, s2);
		out << line;
		if (!in.eof())
			out << std::endl;
	}
}
