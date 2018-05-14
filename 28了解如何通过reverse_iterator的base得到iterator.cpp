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

void print(int* n)
{
	cout<<*n;
}

int main(int argc, char const *argv[])
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	vector<int>::reverse_iterator i=v.rbegin();
	for(i;i!=v.rend();i++)
		cout << *i;
	vector<int>::iterator i(v.base());
	return 0;
}