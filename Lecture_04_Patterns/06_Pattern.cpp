// We will make a new pattern
#include<iostream>
using namespace std;
int main(){
int i,j,n;
char ch=65;
cout<<"Enter pattern size"<<endl;
cin>>n;
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        cout<<(char)(ch+i-1)<<" ";
    }cout<<endl;
}
    return 0;
}