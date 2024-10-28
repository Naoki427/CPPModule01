#include "Zombie.hpp"

void Zombie::setName(std::string name)
{  
    this->name = name;
}
Zombie::~Zombie()
{
    std::cout << this->name << " is dead" << std::endl;
}
void    Zombie::anounce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}