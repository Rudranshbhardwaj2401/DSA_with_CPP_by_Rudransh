//We know that cin can't read tabs,enters and spaces
//So we will use cin.get() function that can read all characters including them and therefore will know the ASCII value of them
#include <iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter tab/enter/space";
    cin.get(a);
    int n=a;
    cout<<"ASCII value is "<<n;
    return 0;
}