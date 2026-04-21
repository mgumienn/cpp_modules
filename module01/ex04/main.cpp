#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error\nNot enough arguments" << std::endl;
		return 1;
	}

	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (s1.empty())
	{
		std::cout << "Error\nCannot search for nothing" << std::endl;
		return 1;
	}

	std::ifstream in(argv[1]);
	if (!in || !in.is_open())
	{
		std::cout << "Error\nCouldn't open this file (it may not even exist)" << std::endl;
		return 1;
	}

	std::string outFileName = std::string(argv[1]) + ".replace";
	std::ofstream out(outFileName.c_str());
	if (!out)
	{
		std::cout << "Error\nUnexpected error occured" << std::endl;
		return 1;
	}

	std::stringstream buffer;
	buffer << in.rdbuf();
	std::string content = buffer.str();

	std::string new_content;
	std::string::size_type last_pos = 0;
	std::string::size_type found_pos;

	while ((found_pos = content.find(s1, last_pos)) != std::string::npos)
	{
		new_content += content.substr(last_pos, found_pos - last_pos);
		new_content += s2;
		last_pos = found_pos + s1.length();
	}

	new_content += content.substr(last_pos);
	out << new_content;
	std::cout << "Result saved into: " << outFileName << std::endl;
	return 0;
}
