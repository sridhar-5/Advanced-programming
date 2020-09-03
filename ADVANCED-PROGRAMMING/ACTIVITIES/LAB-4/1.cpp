#include <iostream>
#include <cmath>

using namespace std;

class square{
protected:
  int side;
public:
  int perimeter()
  {
    return (4*side);
  }
  int area()
  {
    return (side * side);
  }
  void get_data()
  {
    cout << "\nside of the square : ";
    cin >> side;
  }
  square()
  {
    cout << " \n square constructor called" ;
    side = 1;
    cout << "\n The end";
  }
  ~square()
  {
    cout << "\nDestructor called";
  }
};
class cube : private square
{
private:
  int vol;
  int surface_area;
public:
  void getdata()
  {
    square::get_data();
  }
  int surfacearea()
  {
    int surface_area = (6*side*side);
    cout << "\n surface area of the cube : " << surface_area;
  }
  int volume()
  {

    int vol = (side * side * side );
    cout << "\n volume of the cube : " << vol;
  }
};
int main()
{
  square s1;
  s1.get_data();
  cout << "\n perimeter of the square :" << s1.perimeter();
  cout << "\n area of the square : " << s1.area();
  cube c1;
  c1.getdata();
  c1.surfacearea();
  c1.volume();
}
