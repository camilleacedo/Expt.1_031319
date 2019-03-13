#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

	double netbalance, payment, d1, d2, avgdailybalance, interestrate, interest; 
	cout << "input net balance" << endl;
	cin >> netbalance; 
	cout << "input made payment" << endl;
	cin >> payment; 
	cout << "input days in the billing cycle" << endl;
	cin >> d1; 
	cout << "input days payment made before the billing cycle" << endl;
	cin >> d2; 
	cout << "input interest rate" << endl;
	cin >> interestrate; 

	interestrate = 0.0152;
	avgdailybalance = (netbalance * d1 - payment * d2) / d1;
	interest = (avgdailybalance * interestrate);	cout << "interest =" << interest << endl;

	-getch();
	return 0;
}