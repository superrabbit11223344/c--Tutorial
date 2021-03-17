#include <iostream>

class Entity
{
public:
    float X, Y;


    Entity(float x, float y)
    {
        std::cout << "Created Entity" << std::endl;
        X = x;
        Y = y;
    }

    ~Entity()
    {
        std::cout << "Destroyed Entity" << std::endl;
    }


    void Print()
    {
        std::cout << X << ", " << Y << std::endl;
    }
};

void Function()
{
    Entity e(10.0f, 5.0f);
    e.Print();
}

int main()
{
    Function();
    std::cin.get();
}