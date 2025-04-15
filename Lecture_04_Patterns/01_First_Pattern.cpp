// We will make a simple n*n star printing pattern
#include <iostream>
using namespace std;
int main()
{
    int i = 1, j = 1, n;
    cout << "Enter Pattern Size" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}