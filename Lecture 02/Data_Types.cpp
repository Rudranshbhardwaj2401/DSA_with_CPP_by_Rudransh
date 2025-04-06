#include <iostream>
using namespace std;
int main()
{
    int i = 5;
    char c = 'A';
    bool b = 1;
    float f = 1.2;
    double d = 1.23;
    int s = sizeof(i);
    cout << i << endl;
    cout << c << endl;
    cout << b << endl;
    cout << f << endl;
    cout << d << endl;
    cout << "Size of i is:" << s << endl;

    return 0;
}