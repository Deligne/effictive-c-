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

struct Widget{
	int data;
};


typedef pair<string, int> Data; // 在这个例子里
 // "map"容纳的类型
class DataCompare { // 用于比较的类
public:
 bool operator()(const Data& lhs, // 用于排序的比较函数
 const Data& rhs) const
 {
 return keyLess(lhs.first, rhs.first); // keyLess在下面
 }
 bool operator()(const Data& Ihs, // 用于查找的比较函数
 const Data::first_type& k) const // （形式1）
 {
 return keyLess(lhs.first, k);
 }
 bool operator()(const Data::first_type& k, // 用于查找的比较函数
 const Data& rhs) const // （形式2）
 {
 return keyLessfk, rhs.first);
 }
private:
 bool keyLess(const Data::first_type& k1, // “真的”
 const Data::first_type& k2) const // 比较函数
 {
 return k1 < k2;
 }
};

int main(int argc, char const *argv[])
{

	sort(vd.begin(), vd.end(), DataCompare()); // 结束建立阶段。（当
 // 模拟multimap时，你
 // 可能更喜欢用stable_sort
 // 来代替；参见条款31。）
	string s; // 用于查找的值的对象

	set<int> s;
	s.insert(1);
	s.insert(2);

	vector<Widget> vw;

	return 0;
}