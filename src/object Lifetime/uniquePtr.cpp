#include <iostream>
#include <string>
#include <memory>

class Entity
{
public:
    Entity()
    {
        std::cout << "Created Entity!" << std::endl;
    }

    ~Entity()
    {
        std::cout << "Destroyed Entity!" << std::endl;
    }

    void Print() {}
};

int main()
{
    {
        std::shared_ptr<Entity> e0;
        {
            // std::unique_ptr<Entity> entity(new Entity());
            std::unique_ptr<Entity> entity = std::make_unique<Entity>();  // Preferred implemention

            entity->Print();
        }
    }

    std::cin.get();
}