#include <iostream>
#include <string>

class Entity
{
// public:
// private:
protected:
    int X, Y;
    void Print() {};
public:
    Entity()
    {
        X = 0;
    }
};

class Player : public Entity
{
public:
    Player()
    {
        X = 2;
        Print();
    }
};

int main()
{
    Entity e;

    std::cin.get();
}