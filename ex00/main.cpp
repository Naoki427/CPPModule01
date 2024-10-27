#include "Zombie.hpp"

int main ()
{
    Zombie * heap = newZombie("Heapman");
    heap->anounce();
    delete heap;
    randomChump("Stackman");
    return (0);
}