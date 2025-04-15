// We will make a program to print sum of all even numbers from 1 to n
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
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    cout << sum;
    return 0;
}