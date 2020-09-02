#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n,i;
  double sum;
  cout << "please enter a number : ";
  cin >> n;
  sum = 0;
  for(i = 1; i<=n; i++)
  {
    cout << " \n " <<"The "<< i << " th term is " <<  (1/pow(i,i)) ;
    sum = sum + (1/pow(i,i));
  }
  cout << "\n sum of the series : " << sum;
}
