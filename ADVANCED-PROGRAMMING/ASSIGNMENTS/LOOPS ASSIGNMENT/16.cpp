#include <iostream>
#include <string>
using namespace std;

int main()
{
   int i,j,hai,rows,k,t=1;

    cout << " Input number of rows: ";
    cin >> rows;
   hai=rows+4-1;
   for(i=1;i<=rows;i++)
   {
         for(k=hai;k>=1;k--)
            {
              cout<<" ";
            }
	   for(j=1;j<=i;j++)
	   cout<<t++<<" ";
	cout<<endl;
    hai--;
   }
}
