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

struct StringPtrLess:
 public binary_function<const string*, // 使用这个基类
 const string*, // 的理由参见条款40
 bool> {
 bool operator()(const string *ps1, const string *ps2) const
 {
 	return *ps1 < *ps2;
 }
};
set<string*, less<string*>, allocator<string*> > ssp3; 
void (*print)(string arg)
{
	cout << arg;
}
int main(int argc, char const *argv[])
{
	set<string*, less<string*>, allocator<string*> > ssp1; 

	set<string*> ssp;
	ssp.insert(new string("And"));
	ssp.insert(new string("Bnd"));
	ssp.insert(new string("Cnd"));
	ssp.insert(new string("And"));
	for(set<string*>::const_iterator i =ssp.begin(); i!=ssp.end(); ++i)
		std::cout << **i<<"   ";
	for_each(ssp.begin(), ssp.end(), print); 
	return 0;
}
