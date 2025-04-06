// We will see how Data type get changes
#include <iostream>
using namespace std;
int main()
{
    int a = 'b';  // b will change to int type (b's ASCII Value in int is 98)
    char ch = 99; // 99 will change to char type (99 is the ASCII Value of c)
    cout << a << endl;
    cout << ch << endl;

    /*Any data type of size n bits can hold numbers upto (2^n)-1
    Example Int size is 32 bits
    It can Hold (2^32)-1=255 numbers
    Say 0 to 255(unsigned) or -128 to 127(signed)
    So If we try to Store 256,257,258 or bigger number it will not hold it
    So it will modify the result like
    256-0,257-1,258-2 and so on
    */

    char ch1 = 353; // 353%256=97
    cout << ch1 << endl;
    return 0;
}