#include<iostream>
using namespace std;

class time{
  int hours;
  int minutes;
  int seconds;

  void calc_time(time t1, time t2)
  {
    hours = t1.hours + t2.hours;
    minutes = t1.minutes + t2.minutes;
    seconds = t1.seconds + t2.seconds;
  }

  public:
    void function_call(time t1, time t2)
    {
      calc_time(t1, t2);
    }

    void get_data()
    {
      cin >> hours;
      cin >> minutes;
      cin >> seconds;
    }

    void print_data()
    {
      cout <<"Sum: " << hours << endl << minutes << endl << seconds;
    }
}t1,t2,t3;

int main()
{

  cout << "Enter time one: ";
  t1.get_data();
  cout<< "Enter time two: ";
  t2.get_data();


  t3.function_call(t1,t2);
  t3.print_data();

  return 0;
}
