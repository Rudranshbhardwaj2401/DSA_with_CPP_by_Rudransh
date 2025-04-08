// We will make a program to print numbers from 1 to n
// So we will use Looping(while)
#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cout << "Enter any number" << endl;
    cin >> n;
    while (i <= n)
    {
        cout << i << "  ";
        i++;
    }
    return 0;
}