#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long int n, i, t = 9;
    int sum = 0;

    cout << "number of terms: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        sum = sum + t;
        cout << t << endl ;
        t = (t * 10) + 9;
    }
    cout << "\n The sum of the series  : " << sum;
}
