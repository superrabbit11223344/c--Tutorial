#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
    std::string m_Name;
    int m_Age;
public:
    Entity(const String& name) 
        : m_Name(name), m_Age(-1) {}
    Entity(int age)
        : m_Name("Unknown"), m_Age(age) {}
};

void PrintEntity(const Entity& entity)
{
    //Printing
}

int main()
{
    PrintEntity(22);

    Entity a("Cherno");
    Entity b = 22;
    std::cin.get();
}