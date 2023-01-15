
# ifndef _EASYFIND_HPP_
# define _EASYFIND_HPP_
# include <iostream>

class nofound : public std::exception
{
public:
	const char* what() const throw();
};

template<typename T>
int easyfind(T con, int i)
{
	typename T::iterator it;
	it = std::find (con.begin(), con.end(), i);
	if (it != con.end())
		return (*it);
	throw nofound();
}



#endif
