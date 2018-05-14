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

class Employee {
public:
 const string& getName() const; // 获取雇员名
 void setName(const string& name); // 设置雇员名
 const string& getTitle() const; // 获取雇员头衔
 void setTitle(const string& title);
 const int& idNumber() const;
 void setId(const int &id);
private:
	string Name;
	string Title;
	int ID;
};

const string& Employee::getName() const
{
	return Name;
}
const string& Employee::getTitle() const
{
	return Title;
}
const int& Employee::idNumber() const
{
	return ID;
}
void Employee::setName(const string &name) 
{
	Name = name;
}
void Employee::setTitle(const string &title)
{
	Title = title;	
}
void Employee::setId(const int &id)
{
	ID = id;
}

struct IDNumberLess{
 	public binary_function<Employee, Employee, bool> { // 参见条款40
 		bool operator()(const Employees lhs,
 			const Employee& rhs) const
 		{
 			return lhs.idNumber() < rhs.idNumber();
 		}
};

typedef set<Employee, IDNumberLess> EmpIDSet;
EmpIDSet se; 

int main(int argc, char const *argv[])
{
	map<int, string> m;
	return 0;
}