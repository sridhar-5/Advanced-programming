#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

class student{
public:
  string name;
  int marks1,marks2,median;
  void getdata()
  {
    cout << "please enter your name : ";
    cin >> name;
    cout << "please enter the marks1 : ";
    cin >> marks1;
    cout << "please enter the marks2 : ";
    cin >> marks2;
  }
  void median_marks()
  {
     median = (marks1 + marks2)/2;
  }
  void display()
  {
    getdata();
    median_marks();
    cout << "Your Name : " << name;
    cout << "\nMedian Marks : " << median;
  }
};
int main()
{
  student s1;
  s1.display();
}
