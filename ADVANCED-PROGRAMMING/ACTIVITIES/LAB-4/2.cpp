#include <iostream>
#include <cmath>

using namespace std;

class rectangle{
private:
  int length;
  int breadth;
public:
  int perimeter()
  {
    return (2*(length+breadth));
  }
  int area()
  {
    return (length * breadth);
  }
  void getdata()
  {
    cout << "\n LENGTH : ";
    cin >> length;
    cout << "\n Breadth : ";
    cin >> breadth;
  }
  int get_length()
  {
    return length;
  }
  int get_breadth()
  {
    return breadth;
  }
  rectangle()
  {
    cout << "\n rectangle constructor called "<<endl;
    length = 1;
    breadth = 1;
    cout << "\n End" << endl;
  }
  ~rectangle()
  {
    cout << "\n Destructing now";
  }
};
class cuboid : public rectangle
{
private:
  int height;
public:
  void get_data(){
      rectangle::getdata();
      cout << " \n Height : ";
      cin >> height;
  }
  int surface_area()
  {
    int length = rectangle::get_length();
    int breadth = rectangle::get_breadth();
    int surface = (2 * (length * breadth + breadth * height + height * length));
    return surface;
  }
  int volume()
  {
    int length = rectangle::get_length();
    int breadth = rectangle::get_breadth();
    int vol = (length * breadth *height);
    return vol;
  }

};
int main()
{
  rectangle r1;
  r1.getdata();
  cout << "\n Perimeter : " << r1.perimeter();
  cout << "\n Area : " << r1.area();
  cuboid c1;
  c1.get_data();
  cout << "\n surface area : " << c1.surface_area();
  cout << "\n volume : " << c1.volume();
}
