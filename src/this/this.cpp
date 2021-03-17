#include <iostream>
#include <string>

class Entity;
void PrintEntity(const Entity& e);

class Entity
{
private:
    int x, y;

public:
    Entity(int x, int y)
    {
        this->x = x;
        this->y = y;

        // Entity& e = *this;

        PrintEntity(*this);
    }

    int GetX() const
    {

        return x;
    }
    
};

void PrintEntity(const Entity& e)
{
    std::cout << e.GetX() << std::endl;
}

int main()
{
    Entity e(1, 5);

    std::cin.get();

}