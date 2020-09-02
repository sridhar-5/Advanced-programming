#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

class rprime
{
public:
  int n,i,j,count;
public:
  void primen()
  {
     count = 0;
     cout << "please enter a number : ";
     cin >> n;
     for (i = n-1;i > 1; i--)
     {
       count = 0;
       for (j = 1; j <= i;j++)
       {
         if (i % j == 0)
         {

           count = count + 1;
         }
       }

       if (count == 2)
       {
         cout << "the prime number just before " << n << " : " << i;
         break;
       }
     }
  }
};
int main()
{
  rprime p1;
  p1.primen();
}
