# ifndef __SER_HPP__
# define __SER_HPP__
# include <iostream>

struct Data
{
	std::string		str;
	double			pi;
	int				y;
};

std::ostream& operator<<(std::ostream& out, const Data& ptr);
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif