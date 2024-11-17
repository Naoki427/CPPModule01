#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <sstream>
class Zombie {
    private:
            std::string name;
    public:
            ~Zombie();
            void anounce( void );
            void setName(std::string name);
};
Zombie* zombieHorde( int N, std::string name );
#endif