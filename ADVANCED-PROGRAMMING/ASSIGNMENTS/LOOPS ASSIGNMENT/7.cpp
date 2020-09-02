#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

class factorial {
public:
  int n,fac,i;
public:
  void fact()
  {
    fac = 1;
    cout << "please enter a number : ";
    cin >> n;
    for(i = n; i >= 1; i--)
    {
      fac = fac * i;
    }
    cout << "The factorial of the number is : " << fac << endl;
  }
};
int main()
{
  factorial f1;
  f1.fact();
}
