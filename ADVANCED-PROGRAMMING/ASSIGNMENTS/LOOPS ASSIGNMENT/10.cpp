#include <iostream>
#include <cmath>

using namespace std;

class series
{
public:
  int n,i,sum;
public:
  void ser()
  {
    sum = 0;
    cout << "Please enter an integer : ";
    cin >> n;
    for(i = 1;i <= n;i++)
    {
      sum = sum + (i*i);
      cout << " \n "<< i << "*" << i << "=" << (i*i);
    }
    cout << "The sum pf the series is : " << sum;
  }
};
int main()
{
  series s1;
  s1.ser();
}
