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

class Widget
{
public:
	Widget()=default;
	~Widget()=default;
};


struct DeleteObject{
	template <typename T>
	void operator()(const T* ptr)
	{
		delete ptr;
	}
};

int main(int argc, char const *argv[])
{
	typedef std::vector<Widget*> vwp;
	vwp v1;
	for(int i=0;i<10;++i)
	{
		v1.push_back(new Widget);
	}
	for_each(v1.begin(), v1.end(),DeleteObject());
	typedef shared_ptr<Widget> spw;
	std::vector<spw> v2;
	for(int i=0;i<10;++i)
	{
		v2.push_back(spw(new Widget));
	}


	return 0;
}