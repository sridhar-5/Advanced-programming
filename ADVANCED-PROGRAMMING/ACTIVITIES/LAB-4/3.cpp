#include <iostream>
#include <cmath>

using namespace std;

class employee{
protected:
  int empno;
  char name[50];
  char designation[50];
public:
  void gettingdata()
  {
    cout << "\n please enter the employees number : ";
    cin >> empno;
    cout << "\n please enter the employee name : ";
    cin >> name;
    cout << "\n please enter the designation of employee : ";
    cin >> designation;
  }
};
class salary : public employee{
private:
  double basic_pay;
  double hra;
  double da;
  double pf;
  double netpay;
public:
  void netsal()
  {
    cout << "\n Enter the basic pay : ";
    cin >> basic_pay;
    cout << "\n Enter the HRA : " ;
    cin >> hra;
    cout << "\n Enter the DA " ;
    cin >> da;
    cout << "\n Enter the pf :";
    cin >> pf;
    netpay = basic_pay + (basic_pay*hra) + (basic_pay * da) + (basic_pay * pf);
    cout << "\n Emp name: " << name;
    cout << "\n Netpay : " << netpay;
  }
};
int main()
{
 employee e1;
 e1.gettingdata();
 salary s1;
 s1.netsal();
}

/* HERE THE MEMBERS IN THE CLASS EMPLOYEE ARE PROTECTED BECAUSE THEIR ACCESS IS ONLY LIMITED TO
 THE SUBCLASS SALARY AND THE AND THE MEMBER FUNCTION IN THE CLASS EMPLOYEE IS LEFT PUBLIC BECAUSE
 IT SHOULD BE CALLED FROM THE MAIN FUNCTION AND THE MEMBERS IN THE SALARY CLASS ARE PRIVATE BECAUSE
 THEIR ACCESS IS ONLY LIMITED TO CLASS SALARY. HERE THE BASE CLASS IS INHERITED AS A PUBLIC
 BECAUSE THE MEMBERS IN THE BASE CLASS ARE PROTECTED AND EVEN AFTER THE INHERITENCE THEY REMAIN
 PROTECTED . */
