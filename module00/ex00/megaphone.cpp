#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 1;
	}
	std::string str = "";
	for (int i = 1; i < argc; i++)
		str.append(argv[i]);
	for (int i = 0; str[i]; i++)
		str[i] = std::toupper(str[i]);
	std::cout << str << "\n";
	return 0;
}