// Michael Smith x00107586
#include"Employee.h"

Employee::Employee()
{}

Employee::Employee(int s, string n)
{
	salary = s;
	name = n;
}

const string Employee::getName()
{
	return name;
}

int Employee::getSalary()
{
	return salary;
}

bool Employee::operator<(Employee &rop)
{
	return (salary < rop.salary);
}

bool Employee::operator>(Employee &rop)
{
	return (salary > rop.salary);
}