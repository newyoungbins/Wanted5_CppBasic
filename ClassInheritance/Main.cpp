#include <iostream>

class Base
{
public:
	Base()
	{
		std::cout << "Base() called\n";
	}
	~Base()
	{
		std::cout << "~Base() called\n";
	}
	
	void Play()
	{
	}
};

class Derived : public Base
{
public:
	Derived()
	{
		std::cout << "Derived() called\n";
	}
	~Derived()
	{
		std::cout << "~Derived() called\n";
	}

	void Attack()
	{

	}
};

int main()
{
	Derived derived;

	Base* b = new Derived();
	b->Play();
	// b->Attack();  // 접근이 안 됨.

	delete b;
	b = nullptr;
}