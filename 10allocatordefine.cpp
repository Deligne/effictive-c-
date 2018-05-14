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

template<typename T> // 标准分配器像这样声明，
class allocator { // 但也可以是用户写的
public: // 分配器模板
 template<typename U>
 struct rebind{
 typedef allocator<U> other;
 };
};

int main(int argc, char const *argv[])
{
	/* code */
	a
	return 0;
}