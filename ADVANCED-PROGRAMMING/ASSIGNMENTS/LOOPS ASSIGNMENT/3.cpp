#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

class natural
{
  public :
  int n;
  public:
    void naturalno()
    {
      int i = 0;
      cout << "please enter how many numbers to print : ";
      cin >> n;
      for (i = 0;i < n;i++)
      {
        cout << "\n" << i+1;
      }
    }
  public:
  void naturalsum()
  {
    int i;
    int sum=0;
    for (i = 1;i <= n;i++)
    {
      sum = sum + i ;
    }
    cout << "\nThe sum of " << n << " numbers is : " << sum;
  }

};
int main()
{
  natural n1;
  n1.naturalno();
  n1.naturalsum();
}
