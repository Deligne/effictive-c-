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
	vector<int > v;
	v.push_back(1);
	v.pop_back(0);
	sort(v.begin(), v.end(), greater<int>());
	return 0;
}
