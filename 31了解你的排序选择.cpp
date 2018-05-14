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

bool comp(int x, int y)
{
	return x < y;
}

void print(int x )
{
	cout << x <<endl;
}
void fun(int i )
{
    cout<<i<<endl;
}

int main()
{
    int a[] = { 1, 2, 3, 4};
    vector<int> v(a, a+sizeof(a)/sizeof(int));
    for_each(v.begin(), v.end(), print);
}

/*总结一下你的排序选择：
● 如果你需要在vector、string、deque或数组上进行完全排序，你可以使用sort或stable_sort。
● 如果你有一个vector、string、deque或数组，你只需要排序前n个元素，应该用partial_sort。
● 如果你有一个vector、string、deque或数组，你需要鉴别出第n个元素或你需要鉴别出最前的n个元素，
而不用知道它们的顺序，nth_element是你应该注意和调用的。
● 如果你需要把标准序列容器的元素或数组分隔为满足和不满足某个标准，你大概就要找partition或
stable_partition。
● 如果你的数据是在list中，你可以直接使用partition和stable_partition，你可以使用list的sort来代替sort和
stable_sort。如果你需要partial_sort或nth_element提供的效果，你就必须间接完成这个任务，但正如我
在上面勾画的，会有很多选择。*/