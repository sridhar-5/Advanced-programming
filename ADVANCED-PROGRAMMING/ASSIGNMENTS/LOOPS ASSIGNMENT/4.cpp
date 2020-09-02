#include <iostream>
#include <cmath>

using namespace std;

class perfect_number
{
public:
  void perfectno()
  {
    int i,j,sum = 0;
    for(i = 1;i < 500;i++)
    {
      sum = 0;
      for(j = 1;j < i;j++)
      {
        if (i % j == 0)
        {
          sum = sum + j;
        }
      }
      if (sum == i)
      {
        cout << "\n" << i;
      }
    }
  }
};
int main()
{
  perfect_number p1;
  p1.perfectno();
}
