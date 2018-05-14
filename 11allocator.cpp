#include <stdio.h>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <fstream>
#include <memory>
#include <mutex>
using namespace std;


class Lock{
	Lock(int n)
	{
		mutex.lock()
		++n;
		n*=2;
	}
	~Lock()
	{
		mute.unlock();
	}
};

int main(int argc, char const *argv[])
{
	std::vector<char> v;
	return 0;
}



