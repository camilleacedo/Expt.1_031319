#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double mass, density; 
	cout << "Enter mass in grams" << endl;
	cin >> mass; 
	cout << "mass = " << mass << "g" << endl; 
	cout << "Enter density in grams per cubic centimeter" << endl; 
	cin >> density;
	cout << "density=" << density << "g/cm^3" << endl; 
	cout << "volume of the object=" << mass / (4 * density) << "cm^3" << endl; 

	-getch();
	return 0;
}