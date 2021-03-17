#include <iostream>
#include <array>

class Entity
{
public:
    std::array<int,5> another;

    Entity()
    {
        for (int i = 0; i < another.size(); i++)
        {
            another[i] = 2;
        }
    }
};


int main()
{
    Entity e;

    std::cout << sizeof(Entity) << std::endl;

    std::cin.get();
}