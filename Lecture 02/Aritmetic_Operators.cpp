/* There are 5 Arithmetic Operators
+ Addition
- Subtraction
* Multiplication 
/ Division
% Modulus (returns remainder)
*/
#include<iostream>
using namespace std;
int main(){

int a = 2;
int b = 3;
cout<<a+b<<endl;  //5
cout<<a-b<<endl;  //-1
cout<<a*b<<endl;  //6
cout<<a/b<<endl;  //int/int will be int. So 2/3=0.66=0
cout<<b%a<<endl;  //1
float b1=3.0;
cout<<a/b1<<endl; //int/float=float. So 2/3.0=0.66
    return 0;
}