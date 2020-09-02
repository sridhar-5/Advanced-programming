#include <iostream>
using namespace std;
int main()
{
    int i, SZ;
    cout << " Input no.of bits: ";
    cin >> SZ;
    char binary[SZ + 1], onesComp[SZ + 1];
    int error = 0;
    cout << " Input a " << SZ << " bit binary value: ";
    cin >> binary;
    for (i = 0; i < SZ; i++)
    {
        if (binary[i] == '1')
        {
            onesComp[i] = '0';
        }
        else if (binary[i] == '0')
        {
            onesComp[i] = '1';
        }
        else
		{
            cout << " Invalid Input. Binary number consists only 1's and 0's" << endl;
            error = 1;
            break;
        }
    }
    onesComp[SZ] = '\0';
    if (error == 0)
    {
        cout << " The original binary = " << binary << endl;
        cout << " Ones complement the number = " << onesComp << endl;
    }
}
