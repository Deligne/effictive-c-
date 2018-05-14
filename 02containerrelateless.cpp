#include <stdio.h>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

class Widget{
public:
	Widget(int x):no(x){};
	Widget()=default;
	int no;
};
typedef vector<Widget> WidgetContainer;
typedef WidgetContainer::iterator WCitertor;
Widget best(5);
WidgetContainer WC{1,2,3,4,5,6};
WCitertor WCI=WC.begin();
int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}

class CustomerList {
private:
 typedef list<Customer> CustomerContainer;
 typedef CustomerContainer::iterator CCIterator;
 CustomerContainer customers;
public: // 通过这个接口
 ... // 限制list特殊信息的可见性
};