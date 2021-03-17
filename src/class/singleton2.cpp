#include <iostream>

class Singleton
{
private:
	static Singleton* instance;

public:
	static Singleton& get()
	{
		return *instance;
	}
	
	void Hello() {}
};

Singleton* Singleton::instance = nullptr;



int main()
{
	Singleton::get().Hello();
	Singleton a = Singleton::get();

	std::cin.get();
}