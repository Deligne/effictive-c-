#include <stdio.h>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;
typedef list<int> li;
typedef list<int> li2;


int main(int argc, char const *argv[])
{
	/* code */
	li i1{1,2,3};
	li i2{4,5,6};
	i1.splice(i1.end(),i2,find(i2.begin(),i2.end(),5),find(i2.begin(),i2.end(),6));
	cout << i1.size();
	return 0;
}
