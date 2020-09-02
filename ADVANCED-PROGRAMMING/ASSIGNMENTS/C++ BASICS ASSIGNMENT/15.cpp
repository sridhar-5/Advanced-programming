#include <iostream>
using namespace std;

int main()
{
    int dividend, divisor, quot,rem;
    cout<<" Input the dividend : "<<endl;
    cin>>dividend;
    cout<<" Input the divisor : "<<endl;
    cin>>divisor;
	quot=dividend / divisor;
	rem=dividend % divisor;
    cout<<" The quotient of the division is : "<< quot << endl;
    cout<<" The remainder of the division is : "<< rem;
    cout << endl;
    return 0;
}
