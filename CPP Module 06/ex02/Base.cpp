#include "Base.hpp"
#include <time.h>

Base::~Base(){}

Base * generate(void)
{
	srand(time(0));
	int r = rand() % 3;
	
	switch (r)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
	}
	return (NULL);
}

void identify(Base* p)
{
	A *a = dynamic_cast<A*>(p);
	if(a)
		std::cout << "the actual type of the object pointed to by p : A" << std::endl;
	B *b = dynamic_cast<B*>(p);
	if(b)
		std::cout << "the actual type of the object pointed to by p : B" << std::endl;
	C *c = dynamic_cast<C*>(p);
	if(c)
		std::cout << "the actual type of the object pointed to by p : C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "the actual type of the object pointed to by p : A" << std::endl;
		(void)a;
	}
	catch(const std::bad_cast& e)
	{
		try
		{
			B& b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "the actual type of the object pointed to by p : B" << std::endl;
		}
		catch(const std::bad_cast& e)
		{
			try
			{
				C& c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "the actual type of the object pointed to by p : C" << std::endl;
			}
			catch(const std::bad_cast& e)
			{}
		}
	}
}