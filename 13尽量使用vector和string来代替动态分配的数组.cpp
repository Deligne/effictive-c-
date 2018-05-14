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
	for(int i = 0;i<10;++i)
	{
		int *p = new int;
		*p=100;
		delete p;
		delete p;
		delete p;
	}
	return 0;
}