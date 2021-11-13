#include <iostream>


class OrcWarrior
{
public:
    OrcWarrior() {
        std::cout << "Constructor OrcWarrior" << std::endl;
    }

    class Orc
    {
    public:
         Orc() {
                std::cout << "Constructor Orc" << std::endl;
          }
    class Character
    {
    public:
        Character() {
            std::cout << "Constructor Character" << std::endl;
        }
    };
    };

    class Warrior
    {
    public:
        Warrior() {
            std::cout << "Constructor Warrior" << std::endl;
         }
         class Character
         {
          public:
            Character() {
            std::cout << "Constructor Character" << std::endl;
             }
    };
};


};


int main()
{
   OrcWarrior::Orc::Character character;
}

