
#include "Span.hpp"
#include "easyfind.hpp"


const char* nofound::what() const throw()
{
    return ("this number does not exist");
}

int main()
{
	int size;
	std::cin >> size;
	std::vector<int> vec(size);
	for (int i = 0; i < size; i++)
	{
		std::cout << i << " : ";
        std::cin >> vec[i];
	}
	try
	{
		Span sp = Span(5);
		sp.addMulNumber(vec);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}