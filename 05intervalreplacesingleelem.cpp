#include <stdio.h>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

std::vector<int> v1{1,2,3},v2{4,5,6};

int main(int argc, char const *argv[])
{
	cout << v1.size();
	//v1.assign(v2.begin()+v2.size()/2,v2.end());
	v1.insert(v1.end(), v2.begin(), v2.end());
	copy(v2.begin(),v2.end(),back_inserter(v1));
	v1.erase(v1.begin(),v1.begin()+2);
	cout << v1.size();
	return 0;
}