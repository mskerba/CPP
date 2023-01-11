#include "Serialization.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

Data* deserialize(uintptr_t raw)
{
	Data* ptr = reinterpret_cast<Data*>(raw);
	return (ptr);
}

std::ostream& operator<<(std::ostream& out, const Data& ptr)
{
	out << ptr.str << ptr.y << " pi = " << ptr.pi;
	return (out);
}