#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	char streetname[100];
	int streetno;
	char cityname[100];
	char statename[100];
	int zipcode;
	
	cout << "please enter the street-no : ";
	cin >> streetno ;
	cout << "please enter the street-name : ";
	cin >> streetname ;
	cout << "please enter the city-name : ";
	cin >> cityname;
	cout << "please enter the state-name : ";
	cin >> statename;
	cout << "please enter zipcode : ";
	cin >> zipcode;
	cout << "\naddress : "<< streetno << "," << streetname << "," << cityname << "," << statename << ","<<zipcode <<endl;
	
}
