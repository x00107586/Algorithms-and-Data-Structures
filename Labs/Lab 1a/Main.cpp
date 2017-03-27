#include "Product.h"
#include "Software.h"
#include "Book.h"
#include <algorithm>
using namespace std;

int main()
{
	const int arraySize = 10;
	Product* products[arraySize];

	double softPrice, bookPrice, cost, smallest = 0;
	int num, count = 1;

	cout << "Enter the price of the software." << endl;
	cin >> softPrice;
	cout << endl;

	cout << "Enter the price of the book." << endl;
	cin >> bookPrice;
	cout << endl;

	Software* sPtr = new Software(softPrice);
	Book* bPtr = new Book(bookPrice);

	products[0] = sPtr;
	products[1] = bPtr;

	cout << "The total cost of the software is: " << products[0]->getGrossPrice() << endl << endl;
	cout << "The total cost of the book is: " << products[1]->getGrossPrice() << endl << endl;

	
		for (int i = 2; i < arraySize; i++)
		{
			cout << "Please select 1 if you wish to purchase software, OR " << endl;
			cout << "Please select 2 if you wish to purchase a book." << endl;
			cin >> num;
			cout << endl;

			if (num == 1)
			{
				cout << "Please enter the price of the software: " << endl;
				cin >> cost;
				sPtr = new Software(cost);
				products[i] = sPtr;
				cout << "The cost of the software is: " << products[i]->getGrossPrice() << endl << endl;
			}
			else if (num == 2)
			{
				cout << "Please enter the price of the book: " << endl;
				cin >> cost;
				bPtr = new Book(cost);
				products[i] = bPtr;
				cout << "The cost of the book is: " << products[i]->getGrossPrice() << endl << endl;
			}
			else
			{
					cout << "You have entered an incorrect number, please try again." << endl;
			}
		}
	

	for (int i = 0;i < arraySize;i++)
	{
		cout << count << ". " << products[i]->getGrossPrice() << endl;
		count++;
	}
	
	cout << endl;

	for (int i = 0; i < arraySize; i++)
	{
		for (int j = i + 1; j < arraySize; j++)
		{
			int smallest = i;
			if (products[j]->getGrossPrice() < products[smallest]->getGrossPrice())
			{
				smallest = i;
				swap(products[i], products[j]);
			}
		}
	}

	cout << "The cost of the products in ascending order: " << endl;
	count = 1;
	for (int i = 0;i < arraySize;i++)
	{
		cout << count << ". " << products[i]->getGrossPrice() << endl;
		count++;
	}


	system("pause");
	return 0;
}