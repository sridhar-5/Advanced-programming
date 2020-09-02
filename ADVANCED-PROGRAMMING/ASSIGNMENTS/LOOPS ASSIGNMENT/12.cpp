#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int i,terms,sum=0;
  cout << "please enter no of odd terms : ";
  cin >> terms;
  for (i = 1;i < 2*(terms);i+=2)
  {
    cout << "\n" << i;
    sum = sum + i;
  }
  cout << "\nThe sum of first " << terms << "odd numbers is : " << sum;
}
