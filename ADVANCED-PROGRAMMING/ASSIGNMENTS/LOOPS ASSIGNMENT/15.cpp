#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
  int i,j,n;
  cout << "please enter the number of rows : ";
  cin >> n;
  for ( i = 1;i <= n;i++)
  {
    cout << "\n";
    for (j = 1;j <= i;j++)
    {
      cout << i;
    }
  }
}
