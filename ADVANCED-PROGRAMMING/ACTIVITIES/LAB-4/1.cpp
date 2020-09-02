#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

class Rectangle{
public:
  int length;
  int breadth;

  Rectangle ()
  {
    cout << " # contructor called " << endl;
    cout << "please enter the length : ";
    cin >> length;
    cout << "please enter the breadth :";
    cin >> breadth;
  }
  int perimeter()
  {
    return (2*(length + breadth));
  }
  int area()
  {
    return (length * breadth);
  }
  ~Rectangle()
  {
    cout << " # Destructor called";
    cout << "destructing " << length <<" , " << breadth <<endl;
  }
};
class cuboid:public Rectangle{
  private :
  int height;
  public :
  int cuboi(){
    return (length*breadth*height);

  }
  cuboid()
  {
    cout << "please enter the height of cuboid : ";
    cin >> height;
  }
};

int main()
{
  cuboid c1;
  cout << "The perimeter of rectangle : " << c1.perimeter()<<endl;
  cout << "The area of the rectangle : " << c1.area() << endl;

  cout << "The volume of the rectanglr : " << c1.cuboi() << endl;
}
