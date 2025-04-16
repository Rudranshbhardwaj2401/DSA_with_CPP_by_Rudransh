// We will make a new pattern
#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Enter pattern size" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << (char)(65 + j - 1) << " ";
        }
        cout << endl;
    }
    return 0;
}