#include <stdio.h>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

class Widget
{
public:
	Widget()=default;
	Widget(string s,int n):name(s), value(n){};
	Widget& operator=(const Widget& rhs)
	{
		value += rhs.value;
	}
	void print() const{
		cout << name <<"  "<<value << endl;
	}
private:
	int value;
	string name;
};

typedef std::vector<Widget> vw;

int main(int argc, char const *argv[])
{
	/* code */
	Widget w("hello", 100);
	w.print();

	return 0;
}