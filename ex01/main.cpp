#include "Zombie.hpp"

int main ()
{
    Zombie *zombies = zombieHorde(7,"zombies");
    if (zombies == NULL)
		return (1);
    for(int i = 0;i < 7;i++)
    {
        zombies[i].anounce();
    }
    delete [] zombies;
    return (0);
}