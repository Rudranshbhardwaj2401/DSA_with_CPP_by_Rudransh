/*Relational Operators are of 6 Types
== Equal to
!= Not Equal to
<  Less Than
>  Greater Than
<= Less Than or Equal To
>= Greater Than or Equal To
*/
#include <iostream>
using namespace std;
int main()
{

    int n1 = 2;
    int n2 = 3;
    bool a = (n1 == n2);
    cout << a << endl;
    bool b = (n1 != n2);
    cout << b << endl;
    bool c = (n1 < n2);
    cout << c << endl;
    bool d = (n1 > n2);
    cout << d << endl;
    bool e = (n1 <= n2);
    cout << e << endl;
    bool f = (n1 >= n2);
    cout << f << endl;

    return 0;
}