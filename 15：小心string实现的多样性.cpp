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

int *p()
{
	int *n=new int;
	*n=100;
	return n;
}

int&f()
{
	int o;
	0=10000;
	return &o;
}

int main(int argc, char const *argv[])
{
	int g=f();
	std::cout<<*g<<std::endl;
	int *i = p();
	std::cout << *i<<std::endl;
	string s("abcd");
	std::cout << s.capacity() <<std::endl;
	char s1[]="helloworld";
	std::cout <<s1 <<std::endl;
	s1[5]=0;
	std::cout <<s1 <<std::endl;
	return 0;//return local obj
}