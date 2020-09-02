#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

class natural
{
  public :
  int n;
  public:
    void naturalsum()
    {
      int i = 0;
      int sum=0;
      cout << "please enter how many numbers to find sum of : ";
      cin >> n;
      for (i = 0;i <= n;i++)
      {
        sum = sum + i ;
      }
      cout << "The sum of " << n << " numbers is : " << sum;
    }

};
int main()
{
  natural n1;
  n1.naturalsum();
}
