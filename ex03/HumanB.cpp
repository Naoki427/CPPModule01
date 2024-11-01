#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) :name(name){
    this->weapon = nullptr;
};

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    if(this->weapon != nullptr)
    {
        std::cout << this->name << " attack with their " << this->weapon->getType() << std::endl;
    }
    else
    {
        std::cout << this->name << " attack with their fists" << std::endl;
    }
}