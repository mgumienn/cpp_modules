#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* ptr = &str;
	std::string& ref = str;

	std::cout << "String address: " << &str << std::endl;
	std::cout << "Pointer address: " << ptr << std::endl;
	std::cout << "Reference address: " << &ref << std::endl;
	std::cout << std::endl;

	std::cout << "Value of string: " << str << std::endl;
	std::cout << "Value pointed to by pointer:  " << *ptr << std::endl;
	std::cout << "Value pointed to by reference: " << ref << std::endl;
}