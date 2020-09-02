#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

 class rectang{
 private:
   double length,breadth;
   void getdata()
   {
     cout << "please enter the length of the rectangle : ";
     cin >> length;
     cout << "please enter the breadth of the rectangle : ";
     cin >> breadth;
   }
 public:
   double area()
   {
     getdata();
     return length * breadth;
   }
 };
 int main()
 {
   double v;
   rectang r1;
   v = r1.area();
   cout << "area of rectanle :" << v;
 }
