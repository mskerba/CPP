#include "iter.hpp"

int main()
{
	int tab[5];
	iter(tab, 5, write);
	iter(tab, 5, read);
}