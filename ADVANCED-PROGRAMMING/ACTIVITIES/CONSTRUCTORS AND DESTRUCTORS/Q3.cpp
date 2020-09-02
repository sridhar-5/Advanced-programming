#include<iostream>
using namespace std;

class Student
{
    private:
        int marks;
        char grade;
    public:
        Student(int m, char g)
        {
            marks= m;
            grade= g;
        }

        void show()
        {
            cout<<"\nMarks ="<<marks<<endl;
            cout<<"\nGrade = "<<grade<<endl;
        }
};

int main()
{
    Student s1(730, 'A'), s2(621,'B');
    cout<<"Record of student 1 :: ---"<<endl;
    s1.show();
    cout<<"\nRecord of student 2 :: ---"<<endl;
    s2.show();

    return 0;
}
