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

template<typename T>
class BetweenValues:
public unary_function<T, bool> { // 参见条款40
public:
 BetweenValues(const T& lowValue,
 const T& highValue) // 使构造函数保存上下界
 :lowVal(lowValue), highVal(highValue)
 {}
 bool operator()(const T& val) const //返回val是否在保存的值之间
 {
file:///D|/Documents%20and%20Settings/Fingster/My%20Documents/Effective%20STL/item_43.html (6 of 8)2005-4-26 15:20:02
http://bbs.elecfans.com 电子技术论坛 http://www.elecfans.com 电子发烧友
条款43：尽量用算法调用代替手写循环
 return val > lowVal && val < highVal;
 }
private:
 T lowVal;
 T highVal;
};
...
vector<int>::iterator i = find_if(v.begin(), v.end(),
 BetweenValues<int>(x, y));