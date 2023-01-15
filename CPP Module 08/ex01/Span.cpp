
#include "Span.hpp"
#include "easyfind.hpp"

Span::Span()
{
	_shortestSpan = INT_MAX;
	_min = INT_MAX;
	_max = INT_MIN;
	std::cout << "default constractor is called." << std::endl;
}

Span::Span(unsigned int max):_maxStock(max)
{
	_shortestSpan = INT_MAX;
	_min = INT_MAX;
	_max = INT_MIN;
	std::cout << "parametrize constractor is called." << std::endl;
}

void Span::addMulNumber(std::vector<int> vec)
{
	std::vector<int>::iterator it;
	for (it = vec.begin(); it < vec.end(); it++)
		this->addNumber(*it);
}

void Span::addNumber(int num)
{
	if(this->_con.size() == this->_maxStock)
		throw std::length_error("Container is full!");
	if (_min > num) _min = num;
	if (_max < num) _max = num;
	if (num)
	{
		try
		{
			if (easyfind(this->_con, num) == num)
				_shortestSpan = 0;
		}
		catch(...){}
		int m = INT_MAX;
		std::vector<int>::iterator it;
    	for (it = this->_con.begin(); it < this->_con.end(); it++)
			if (abs(*it - num) < m)
				m = abs(*it - num);
		if (m < _shortestSpan)	 _shortestSpan = m;
	}
	this->_con.push_back(num);
}

int Span::shortestSpan()
{
	return (this->_shortestSpan);
}

int Span::longestSpan()
{
	return (this->_max - this->_min);
}

Span::~Span()
{
	std::cout << "default destractor is called." << std::endl;
}
