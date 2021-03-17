#include <iostream>
#include <string>

class Entity
{
public:
    int x;
    void Print() const { std::cout << "Hello!" << std::endl; }
};


int main()
{
    Entity e;
    e.Print();

    Entity* ptr = &e;

    ptr->Print();
    ptr->x = 2;

    std::cin.get();
}