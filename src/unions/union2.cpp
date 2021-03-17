#include <iostream>

struct Vector2
{
    float x, y;
};

struct Vector4
{
    float x, y, z, w;

    Vector2& GetA()
    {
        return *(Vector2*)&x;
    }
};

void PrintVector2(const Vector2& vector)
{
    std::cout << vector.x << ", " << vector.y << std::endl;
}

int main()
{
    std::cin.get();
}