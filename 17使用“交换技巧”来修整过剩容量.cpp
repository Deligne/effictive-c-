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

int main(int argc, char const *argv[])
{
	std::vector<int> v{1,2,3,8,7,6,5};
	sort(v.begin(), v.end());
	std::cout << v.capacity();
	std:: cout << v.size() <<std::endl;
	string s;
	s="sssssssssssssssss";
	std::cout << s.capacity();
	string().swap(s);
	std::cout << s.capacity();	
	// for_each(v.begin(),v.end(),print);
	return 0;
}