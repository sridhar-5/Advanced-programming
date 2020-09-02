#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
class factorial{
private:
  int n;
public:
  int factorial,i;
  private:
    void fact()
    {
      cout << "please enter the value of n : ";
      cin >> n;
      int i,factorial=1;
      for(i = n; i >= 1;i--)
      {
        factorial = factorial * i;
      }
      cout << "the factorial of the number is : " << factorial;
    }
  public:
   void getdata()
   {
     fact();
   }
};
int main()
{
  factorial f1;
  f1.getdata();
}
