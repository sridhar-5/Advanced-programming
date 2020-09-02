#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int i;
	char ascii;
	for (i = 96;i < 123;i++)
	{
		ascii = char(i);
		cout << ascii << " - " << i << endl;
	}
}
