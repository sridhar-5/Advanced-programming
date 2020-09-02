#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Google{
public:
  int TestCases;
  int i,j;              // i,j : iteration variables
  int size;
  int tcase;
  int count;
public:
  void getdata()
  {
    cout << "\nPlease enter the no of test cases: ";
    cin >> TestCases;
  }
  void Malgo()
  {
    getdata();
    tcase = 0;

    while (tcase < TestCases)
    {
      count = 0;
      cout << "\nNo of days : ";
      cin >> size;
      int arr[size];

      for (i = 0;i < size;i++)
      {
        cout << "No of customers on the day : ";
        cin >> arr[i];
      }
      int first = 0;
      for (i = 0; i < size;i++)
      {
        if (i == size-1 && arr[i] > arr[first])
        {
          count = count + 1;
          continue;
        }
        else if (i == 0 && arr[i] > arr[i+1])
        {
          count = count + 1;
          continue;
        }
        else
        {
          if(arr[i] > arr[i+1])
          {
            int flag = 0;
            for (j = 0;j < i;j++)
            {
              if (arr[i] > arr[j])
              {
                 flag = flag + 1;
              }
            }
            if (flag == i)
            {
              count = count + 1;
              continue;
            }
          }
        }
      }
      cout << "case #" << tcase << " : " << count;
      tcase = tcase + 1;
    }
  }
public:
  void user(){
     Malgo();
  }
};
int main()
{
  Google g1;
  g1.user();
}
