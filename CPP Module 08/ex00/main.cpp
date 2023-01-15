#include "easyfind.hpp"
#include <vector>
#include <cmath>



const char* nofound::what() const throw()
{
    return ("this number does not exist");
}

int main()
{
    std::vector<int>    vec(10);

    for (size_t i = 0; i < vec.size(); i++)
    {
        vec[i] = pow(2,i);
        std::cout << vec[i] << std::endl;
    }
    std::cout << "*********************" << std::endl;
    try
    {
        // unsigned int index = easyfind(vec, 31);
        unsigned int index = easyfind(vec, 32);
        std::cout << "the number " << index << " exists "<< std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}