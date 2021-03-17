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
    explicit Entity(int age)
        : m_Name("Unknown"), m_Age(age) {}
};

void PrintEntity(const Entity& entity)
{
    //Printing
}

int main()
{
    PrintEntity(Entity(22));

    Entity a("Cherno");
    Entity b = Entity(22);
    std::cin.get();
}