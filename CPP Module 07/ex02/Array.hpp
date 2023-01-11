
# ifndef _ARRAY_HPP_
# define _ARRAY_HPP_

template<typename T>
class Array
{
private:
	T* array;
	int s;
public:
	Array():array(0), s(0)
	{
		std::cout << "default constructor is called" << std::endl;
	};
	Array(unsigned int n)
	{
		std::cout << "parameterized constructor is called" << std::endl;
		this->s = n;
		array = new T[n]();
	};
	Array(const Array& obj):s(obj.s)
	{
		this->array = new T[s];
		for (int i = 0; i < this->s; i++)
			this->array[i] = obj.array[i];
		std::cout << "copy constructor is called" << std::endl;
	};
	int size()const
	{
		return (this->s);
	};
	Array& operator=(const Array & obj)
	{
		std::cout << "copy assignment is called" << std::endl;
		if (this == &obj)
			return (*this);
		this->s = obj.size();
		this->array = new T[this->s]();
		for(int i = 0; i < this->s; i++)
			this->array[i] = obj.array[i];
		return (*this);
	};
	T& operator[](int i)
	{
		if (i < 0 || i >= this->size())
			 throw std::out_of_range("Index out of range\n");
		return this->array[i];
	};
	~Array()
	{
		delete [] array;
		std::cout << "destructor is called" << std::endl;
	};
};

#endif
