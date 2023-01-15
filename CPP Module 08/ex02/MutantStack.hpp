
# ifndef __MUTANTSTACK_HPP__
# define __MUTANTSTACK_HPP__
# include <iostream>
# include <stack>
# include <deque>
# include <vector>

template <class T, class Container = std::deque<T> >
class MutantStack :public std::stack<T, std::deque<T> >
{
	public:
		MutantStack(){};
		MutantStack(const MutantStack& obj){*this = obj;};
		MutantStack operator=(const MutantStack& obj)
		{
			*this = obj;
			return (*this);
		};
		typedef typename std::deque<T>::iterator iterator;
		iterator begin() { return this->c.begin(); }
    	iterator end() { return this->c.end(); }
		~MutantStack(){};
};



#endif
