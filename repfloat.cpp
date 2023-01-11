#include <iostream>
#include <cstring>

int main()
{
    float num;

	std::cin >> num;
    union 
	{
        float d;
        unsigned char bytes[sizeof(float)];
    } u;

    u.d = num;

    for (int i = sizeof(float) - 1; i >= 0; --i)
        for (int j = 7; j >= 0; --j)
            std::cout << ((u.bytes[i] >> j) & 1);
    return 0;
}
