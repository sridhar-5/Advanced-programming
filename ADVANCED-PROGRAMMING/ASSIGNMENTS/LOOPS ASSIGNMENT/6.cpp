#include<iostream>
using namespace std;
int main()
{
    int i,j,div,a,b,count;
    cout<<"enter the starting range : ";
    cin>>a;
    cout<<"\n enter the ending range : ";
    cin>>b;
    count = 0;
    for(i=a;i<=b;i++)
    {   int sum=0;
        for(j=1;j<=i;j++)
        {
            div = i % j;
            if (div == 0){
                sum = sum + 1;
            }
        }
        if (sum == 2)
        {
          cout << i <<" " ;
          count= count + 1;
        }
   }
   cout<<"\nthe total no.of prime numbers between "<<a<<" to "<<b<<" is :"<<count;
return 0;
}
