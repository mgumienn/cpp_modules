#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		Zombie(void);
		std::string name;
	public:
		Zombie(std::string name);
		void announce(void);
		~Zombie();
	};
	
void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif