#include  <iostream>
using namespace std;

int n;

class Odd
{
   public:
     int i;
     int sum = 0;
       void sums(int n)
       {
         for(i=1; i<=n; i+=2)
         {
           sum += i;
         }
         cout << "Sum of odd numbers upto " << n << " = "<< sum ;
       }
};

int main()
{
   Odd o;
   cout<<"Enter any number: "<<endl;
   cin>>n;

   o.sums(n);

   return 0;
}
