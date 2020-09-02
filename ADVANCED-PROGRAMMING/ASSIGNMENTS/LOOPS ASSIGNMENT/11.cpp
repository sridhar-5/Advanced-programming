#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float x,sum,t,d;
	int i,n;
	cout << "Input the Value of x : ";
	cin >> x;
	cout << "Input the number of terms : ";
	cin >> n;
	sum =1; t = 1;
	for (i=1;i<n;i++)
	{
	  d = (2*i)*(2*i-1);
	  t = -t*x*x/d;
	  sum =sum+ t;
	}
	cout << "\nthe sum = " << sum << "\nNumber of terms = " << n << "\nvalue of x = " << x;
}
