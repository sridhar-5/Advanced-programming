#include <iostream>
#include <cmath>

using namespace std;

class student
{
private:
  char stu[50];
  long int rollno;
  float cgpa;
public:
  void getdata()
  {
    cout << "please enter the student name : ";
    cin >> stu;
    cout << "please enter the roll-no of student : ";
    cin >> rollno;
    cout << "please enter the grade of student : ";
    cin >> cgpa;
    display();
  }
  void display()
  {
    cout << "\n student Name : " << stu;
    cout << "\n Roll-no : " << rollno;
    cout << "\n cgpa : " << cgpa;
  }
};
int main()
{
  student s1;
  s1.getdata();
}
