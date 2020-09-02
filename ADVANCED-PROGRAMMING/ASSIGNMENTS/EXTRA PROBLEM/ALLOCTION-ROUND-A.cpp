#include <iostream>
#include <cmath>
#include <string>
#include <bits/stdc++.h>

using namespace std;

class Budget_calculator{
private:
  int size;
  int Budget;
  int TestCases;
  +
  private:
  void  getdata()
  {
    cout << "No of TestCases : ";
    cin >> TestCases;
  }
private:
  void Malgo()
  {
    getdata();
    int count;
    int arr[size];
    int i,tcase = 0;
    while (tcase < TestCases)
    {

      cout << "\n no of houses : ";
      cin >> size;
      cout << "\n Please enter your Budget : ";
      cin >> Budget;
      for (i = 0;i < size;i++)
      {
        cout << "\n cost of the house : ";
        cin >> arr[i];
      }
      sort(arr,arr+size); // sorting happens here
      for (i= 0;i < size;i++)
      {
        if(arr[i] <= Budget)
        {
          count = count + 1;
          Budget = Budget - arr[i];
        }
      }
      cout << "case #" << tcase+1 << " : " << count ;
      tcase = tcase + 1;
    }
  }
public:
  void function()
  {
    Malgo();
  }
};
int main()
{
  Budget_calculator b;
  b.function();
}
