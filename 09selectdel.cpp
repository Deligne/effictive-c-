#include <stdio.h>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <fstream>
#include <memory>
using namespace std;
typename std::vector<char> v;
int main(int argc, char const *argv[])
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(2);
	v.push_back(2);
	v.erase(remove(v.begin(),v.end(),1), v.end());
	std::cout << *v.begin();
	std::cout << v.size();
	for(std::vector<char>::iterator i=v.bgin();i!=v.end();)
	if(*i<3) v.erase(i++);
	else ++i;	
	return 0;
}