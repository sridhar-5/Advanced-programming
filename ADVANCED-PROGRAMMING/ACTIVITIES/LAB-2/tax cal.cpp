#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	float tax,sales,total;
	cout << "\n please enter the sales amount : ";
	cin >> sales ;
	tax = (0.09*sales); // since the tax is given as 9%
	total = (sales + tax);
	cout << "\n The total amount due is  : " << total << endl;
}
