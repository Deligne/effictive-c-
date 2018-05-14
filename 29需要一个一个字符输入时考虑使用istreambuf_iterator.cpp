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

int main(int argc, char const *argv[])
{
ifstream inputFile("interestingData.txt");
string fileData((istreambuf_iterator<char>(inputFile)),
 istreambuf_iterator<char>());
	return 0;
}
