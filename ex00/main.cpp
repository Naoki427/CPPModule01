#include "Zombie.hpp"

int main ()
{
    Zombie * heap = newZombie("Heapman");
    if (heap == NULL)
        return (1);
    heap->anounce();
    delete heap;
    randomChump("Stackman");
    return (0);
}