// Michael Smith x00107586
#include "Triple.h"
#include "Employee.h"
#include <iostream>
using namespace std;

int main()
{
	Triple<int> int1(10, 20, 30);

	cout << "The max value is: " << int1.maximum() << endl;
	cout << "The min value is: " << int1.minimum() << endl;
	cout << "The median value is: " << int1.median() << endl;
	cout << endl;

	Triple<char> char1('A', 'B', 'C');

	cout << "The max value is: " << char1.maximum() << endl;
	cout << "The min value is: " << char1.minimum() << endl;
	cout << "The median value is: " << char1.median() << endl;
	cout << endl;

	Employee e1(100000, "Mick");
	Employee e2(90000, "Craig");
	Employee e3(60000, "Robert");

	Triple<Employee> emps(e1, e2, e3);

	cout << emps.maximum().getName() << " recieves the highest salary, earning " << emps.maximum().getSalary() << " per year." << endl;
	cout << emps.minimum().getName() << " recieves the lowest salary, earning " << emps.minimum().getSalary() << " per year." << endl;


	system("pause");
	return 0;
}