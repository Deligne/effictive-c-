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

template<typename MapType, // map的类型
 typename KeyArgType, // KeyArgType和ValueArgtype
 typename ValueArgtype> // 是类型参数
 // 的原因请看下面
typename MapType::iterator
 efficientAddOrUpdate(MapType& m,
 const KeyArgType& k,
 const ValueArgtype& v)
{
 typename MapType::iterator Ib = // 找到k在或应该在哪里；
 m.lower_bound(k); // 为什么这里
 // 需要“typename”
 // 参见第7页
 if(Ib != m.end() && // 如果Ib指向一个pair
 !(m.key_comp()(k, Ib->first))) { // 它的键等价于k...
 Ib->second = v; // 更新这个pair的值
 return Ib; // 并返回指向pair的
 } // 迭代器
 else{
 typedef typename MapType::value_type MVT;
 return m.insert(Ib, MVT(k, v)); // 把pair(k, v)添加到m并
 } // 返回指向新map元素的
} 
int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}