#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

class complex
{
public:
  double real_part;
  double img_part;

public:
  void getdata()
  {
    cout << "please enter the real_part : ";
    cin >> real_part;
    cout << "please enter the img_part : ";
    cin >> img_part;
  }
};
void add(complex g1,complex g2)
{
      double real = g1.real_part + g2.real_part;
      double img = g1.img_part + g2.img_part;
      cout << "The sum of the two complex numbers is : " << real << "+" << img <<"i"<< endl;
}
void subtract(complex g1,complex g2)
{
  double real = g1.real_part - g2.real_part ;
  double img = g1.img_part - g2.img_part;
  cout << "The difference of the two complex numbers is : " << real << "+" << img <<"i"<< endl;
}
void multiply(complex g1,complex g2)
{
  double real = ((g1.real_part*g2.real_part)-(g1.img_part*g2.img_part));
  double img = ((g1.real_part*g2.img_part) + (g1.img_part*g2.real_part));
  cout << "The product of the two complex numbers is : " << real << "+" << img <<"i"<< endl;
}

int main()
{
  complex c1,c2;
  c1.getdata();
  c2.getdata();
  add(c1, c2);
  subtract(c1,c2);
  multiply(c1,c2);
}
