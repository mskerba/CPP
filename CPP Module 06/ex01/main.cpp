#include "Serialization.hpp"

int main()
{
	Data ptr;

	ptr.str = "year = ";
	ptr.pi = 3.14159265359;
	ptr.y = 2023;
	std::cout << ptr << std::endl;
	uintptr_t raw = serialize(&ptr);
	std::cout << raw << std::endl; 
	Data *s = deserialize(raw);
	std::cout << *s << std::endl;
}
