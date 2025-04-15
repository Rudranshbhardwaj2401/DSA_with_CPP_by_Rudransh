// We will make a program to print sum of numbers from 1 to n
// So we will use Looping(while)
#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, sum = 0;
    cout << "Enter any number" << endl;
    cin >> n;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout << sum;
    return 0;
}