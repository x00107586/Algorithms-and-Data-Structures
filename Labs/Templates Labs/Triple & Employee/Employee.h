// Michael Smith x00107586
#pragma once
#include <string>
using namespace std;

class Employee
{
public:
	Employee();
	Employee(int s, string n);
	const string getName();
	int getSalary();
	bool Employee::operator<(Employee &rop);
	bool Employee::operator>(Employee &rop);
protected:
	int salary;
	string name;
};