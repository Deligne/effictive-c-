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
	string s="hello";
	std::cout << s.c_str();
	std::vector<char> v;
	v.push_back('a');
	v.push_back('a');
	v.push_back('a');
	string s1(v.begin(),v.end());
	std::cout <<s1;
	copy(s1.begin(),s1.end(),s.end());
	cout<<s;
	return 0;
}