#include <stdio.h>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;
template <typename C>
bool lastGreaterThanFirst(const C& container)
{
	if(container.empty()) return false;
	typename C::const_iterator begin(container.begin());
	typename C::const_iterator end(container.end());
	return *--end>*begin;
}

int main(int argc, char const *argv[])
{
	std::list<int> l{3,2};
	std::cout << lastGreaterThanFirst(l);
	return 0;
}