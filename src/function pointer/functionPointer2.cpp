#include <iostream>

void HelloWorld(int a)
{
    std::cout << "Hello World! Value: " << a << std::endl;
}

int main()
{
    typedef void(*HelloWorldFunction)(int);

    HelloWorldFunction function = HelloWorld;
    function(8);

    std::cin.get();
}