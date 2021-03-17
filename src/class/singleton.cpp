#include <iostream>

class Singleton
{
// private:
// 	static Singleton* instance;

public:
	static Singleton& get()
	{
		static Singleton instance;
		return instance;
	}
	void Hello() {}
};

// Singleton* Singleton::instance = nullptr;

int main()
{
	Singleton::get().Hello();
	std::cin.get();
}