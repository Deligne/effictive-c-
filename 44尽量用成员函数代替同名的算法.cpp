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
	set<int > s{1,2,3};
	set<int>::iterator i = s.find(1);
	cout << *i;
	return 0;
}