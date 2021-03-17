#include <iostream>
#include <vector>

void PrintValue(int value)
{
    std::cout << "Value:" << value << std::endl;
}

void ForEach(std::vector<int>& values, void(*func)(int))
{
    for (int value : values)
    {
        func(value);
    }
}

int main()
{
    std::vector<int> values = {1, 2, 6, 1, 5};
    ForEach(values, PrintValue);

    std::cin.get();
}