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
	vector<bool> v{1,1,0};
	v.shrink_to_fit();
	std::cout << v[2];
	bool b=1;
	bool *b1 = &b;
	//bool *pb = &v[0]; // 用vector<bool>::operator[]返回的
 // 东西的地址初始化一个bool*
	return 0;
}