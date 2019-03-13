#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double boxprice, sidelineprice, premiumprice, genadprice, box, sideline, premium, genad, totalsale, totalbox, totalsideline, totalpremium, totalgenad;
	cout << "Enter box ticket price" << endl;
	cin >> boxprice;
	cout << "Enter sideline ticket price" << endl;
	cin >> sidelineprice;
	cout << "Enter premium ticket price" << endl;
	cin >> premiumprice;
	cout << "Enter genad ticket price" << endl;
	cin >> genadprice;
	cout << "box tickets sold" << endl;
	cin>> box;
	cout << "sideline tickets sold" << endl;
	cin>> sideline;
	cout << "premium tickets sold" << endl;
	cin>> premium; 
	cout << "genad tickets sold" << endl;
	cin>> genad; 

	totalbox = boxprice * box;
	totalsideline = sidelineprice * sideline;
	totalpremium = premiumprice * premium;
	totalgenad = genadprice * genad;

	cout << "number of box tickets sold: \n" << box << endl;
	cout << "total box ticket: \n" <<totalbox << endl;
	cout << "number of sideline tickets sold: \n" << box << endl;
	cout << "total sideline ticket: \n" <<totalbox << endl;
	cout << "number of premium tickets sold: \n" << box << endl;
	cout << "total premium ticket: \n" <<totalbox << endl;
	cout << "number of genad tickets sold: \n" << box << endl;
	cout << "total genad ticket: \n" <<totalbox << endl;

	-getch();
	return 0;
}

