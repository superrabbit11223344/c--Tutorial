#include <iostream>
#include <string>

class Entity
{
private:
    int m_X, m_Y;
    mutable int var;   //mutable，表示该对象在const函数中是可变的，便于调试代码
public:
    int GetX() const    //保证对象的成员变量不发生改变
    {
        var = 5;
        return m_X;
    }

    void SetX(int x)
    {
        m_X = x;
    }
};

void PrintEntity(const Entity& e)   //规定对象e是不可变对象
{
    std::cout << e.GetX() << std::endl;  //该对象调用的方法也应该保证不可变
}

int main()
{
    Entity e;

    const int MAX_VALUE = 90;
    int* const a = new int;

    *a = 2;

    std::cout << *a << std::endl;

    std::cin.get();
}