//We will write a program to check whether a number is prime or not
#include <iostream>
using namespace std;
int main()
{
    int n, i = 2, flag = 0;
    cout << "Enter a number" << endl;
    cin >> n;
    if (n <= 1)
    {
        cout << "It is not a prime number";
    }
    else
    {
        while (i <= n / 2)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
            i++;
        }
        if (flag == 0)
        {
            cout << "It is a prime number";
        }
        else
        {
            cout << "It is not a prime number";
        }
    }
    return 0;
}