#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP
#include "Weapon.hpp"
class HumanA
{
private:
    std::string name;
    Weapon& weapon;
public:
    HumanA(const std::string& name,Weapon& weapon);
    void attack();
};

#endif