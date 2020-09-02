#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

class prime
{
public:
  int n;
public:
  void primeno()
  {
    cout << "please enter the value of n : ";
    cin >> n;
    int i,j,sum;
    for (i = 1;i < n;i++)
    {
      sum = 1;
      for (j = 1;j < i;j++)
      {
        if (i % j == 0)
        {
          sum = sum + 1;
        }
      }
      if (i == 1)
      {
        cout << "1 IS NEITHER PRIME NOR COMPOSITE";
        continue;
      }
      if (sum > 2)
      {
        cout << "\nThe number " << i << " is a composite number.";

      }
      else
      {
        cout << "\nThe number " << i << " is a prime number.";
      }
    }
  }
};
int main()
{
  prime p1;
  p1.primeno();
}
