#ifndef ZOMBIE_HORDE_HPP
#define ZOMBIE_HORDE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(void);
		void setname(std::string name);
		void announce(void);
		~Zombie();
	};
	
void randomChump(std::string name);
Zombie* newZombie(std::string name);
Zombie* zombieHorde( int N, std::string name );

#endif