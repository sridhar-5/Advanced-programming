#include <iostream>
#include <string>

using namespace std;

int main()
{
  char str[150];
  int length = 0,i;
  cout << "please enter a string : ";
  cin >> str;
  for (i = 0; str[i] != '\0';i++)
  {
    length = length + 1;
  }
  cout << "The length of string is : " << length;
}
