// We will make a program to determine whether the entered character is uppercase,lowercase,number or symbol
// So we will use ASCII values of them
#include <iostream>
using namespace std;
int main()
{
    char a;
    cout << "Enter any character" << endl;
    cin >> a;
    if (a >= 48 && a <= 57)
    {
        cout << "It is a number";
    }
    else if (a >= 65 && a <= 90)
    {
        cout << "It is in upercase";
    }
    else if (a >= 97 && a <= 122)
    {
        cout << "It is in lowercase";
    }
    else
    {
        cout << "It is a symbol";
    }
    return 0;
}