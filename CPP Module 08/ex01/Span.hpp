
# ifndef _SPAN_HPP_
# define _SPAN_HPP_
# include <iostream>
# include <vector>

class Span
{
private:
	unsigned int		_maxStock;
	int					_min;
	int					_max;
	int					_shortestSpan;
	std::vector<int>	_con;
public:
	Span();
	Span(unsigned int _maxStock);
	void	addNumber(int num);
	int		shortestSpan();
	void	addMulNumber(std::vector<int> vec);
	int		longestSpan();
	~Span();
};

#endif
