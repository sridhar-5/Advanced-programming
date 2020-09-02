#include <iostream>
#include <cmath>

using namespace std;

class NumberHolder
{
private:
  int a;
  int b;
public:
  void displayMembers()
  {
    cout << "please enter an integer to initialize a : ";
    cin >> a;
    cout << "please enter an integer to initialize b : ";
    cin >> b;
    cout << "\n The assigned value of a : " << a;
    cout << "\n The assigned value of b : " << b;
  }
};
int main()
{
  NumberHolder N1;
  N1.displayMembers();
}
