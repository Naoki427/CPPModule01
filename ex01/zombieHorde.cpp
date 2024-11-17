#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name)
{
    if (N < 1)
		return (NULL);
    Zombie * zombies = new Zombie[N];
    if(zombies == NULL)
        return (NULL);
    for (int i = 0;i < N;i++)
    {
        std::ostringstream oss;
        oss << (i + 1);
        std::string nameWithNumber = name + oss.str();
        zombies[i].setName(nameWithNumber);
    }
    return zombies;
}