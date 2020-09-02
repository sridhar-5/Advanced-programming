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

};
int main()
{
  natural n1;
  n1.naturalno();
}
