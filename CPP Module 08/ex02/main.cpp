
#include "MutantStack.hpp"
#include <list>

int main()
{
	MutantStack<int> mstack;
	std::list<int> lstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it_stack = mstack.begin();
	MutantStack<int>::iterator ite_stack = mstack.end();
	++it_stack;
	--it_stack;
	while (it_stack != ite_stack)
	{
		std::cout << *it_stack << std::endl;
		++it_stack;
	}

	std::cout << "\n*** list check***\n" << std::endl;

	lstack.push_back(5);
	lstack.push_back(17);
	std::cout << lstack.back() << std::endl;
	lstack.pop_back();
	std::cout << lstack.size() << std::endl;
	lstack.push_back(3);
	lstack.push_back(5);
	lstack.push_back(737);
	//[...]
	lstack.push_back(0);
	std::list<int>::iterator it = lstack.begin();
	std::list<int>::iterator ite = lstack.end();
	++it;
	--it;
	while (it != ite)
	{
	    std::cout << *it << std::endl;
	    ++it;
	}
	std::stack<int> s(mstack);
	std::list<int> l(lstack);
	return 0;
}