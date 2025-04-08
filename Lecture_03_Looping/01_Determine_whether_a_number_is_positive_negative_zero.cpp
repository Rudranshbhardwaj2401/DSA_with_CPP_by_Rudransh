// We wil write a basic program to know whether a number is positive or negative or zero
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number" << endl;
    cin >> n; // For any input, we use cin>>

    /*FORMAT
    if (condition1)
    {
    Statement 1;
    Statement 2;
    }
    else if (condition2)
    {
    Statement 3;
    Statement 4;
    }
    else 
    {
    Statement 5;
    Statement 6;
    }*/

    if (n > 0) 
    {
        cout << "Entered number is Positive";
    }
    else if (n < 0)
    {
        cout << "Entered number is Negative";
    }
    else
        cout << "Entered number is Zero";
    return 0;
}