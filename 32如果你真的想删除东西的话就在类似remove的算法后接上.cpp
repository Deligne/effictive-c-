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

void print(int x)
{
	cout << x << "  ";
}

int main(int argc, char const *argv[])
{
	vector<int> v; // 建立一个vector<int> 用1-10填充它
	v.reserve(10); // （调用reserve的解释在条款14）
	for (int i = 1; i <= 10; ++i) {
	 v.push_back(i);
	}
	for_each(v.rbegin(),v.rend(),print);
	v.erase(remove(v.begin(), v.end(), 5), v.end());
	for_each(v.rbegin(),v.rend(),print);
	return 0;
}//remove erase