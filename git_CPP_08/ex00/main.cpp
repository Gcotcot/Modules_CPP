#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include "easyfind.hpp"


int main(void)
{
    int len = 10;
    std::vector<int> vect(len); 
    for (int i = 0; i < 15; i++)
    {
	    int value = i;
	    if (i < len)
	    	std::fill(vect.begin() + i, vect.end(), value);
	    std::vector<int>::iterator found = easyfind(vect, i);
	    if (found == vect.end())
		std::cout << "[+]Vector[+]   Eror 404 Dont found" << std::endl;
	    else
		std::cout << "[+]Vector[+]   Yeah " << *found << " is inside me in " << found - vect.begin() << std::endl;
    }
    if (easyfind(vect, 666) == vect.end())
        std::cout << "[+]Vector[+]   Eror 404 Dont found" << std::endl;
    return (0);
}
