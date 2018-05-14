#include <stdio.h>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <fstream>
#include <memory>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> s;
	vector<int>::reverse_iterator i=s.en;
	s.push_back(1);
	s.push_back(2);
	s.push_back(3);
	s.push_back(4);
	for(;;--i)
	{
		std::cout << *i;
	}
	return 0;
}