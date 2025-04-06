// We will see some Basic datatypes and their size on system
#include <iostream>
using namespace std;
int main()
{
    bool b = 1;        // 1byte or 8bits (but needs only 1bit)
    char c = 'A';      // 1byte or 8bits
    int i = 5;         // 4byte or 32bits
    int s = sizeof(i); // 4byte or 32bits (as it is int)
    float f = 1.2;     // 4byte or 32bits
    double d = 1.23;   // 8byte or 64bits

    cout << i << endl;
    cout << c << endl;
    cout << b << endl;
    cout << f << endl;
    cout << d << endl;
    cout << "Size of i is:" << s << endl;

    return 0;
}