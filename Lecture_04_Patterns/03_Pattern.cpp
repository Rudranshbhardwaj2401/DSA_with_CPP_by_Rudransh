// We will make a new triangle pattern
#include <iostream>
using namespace std;
int main()
{
    int i = 1, j = 1, n, c = 1;
    cout << "Enter Pattern Size" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
    return 0;
}