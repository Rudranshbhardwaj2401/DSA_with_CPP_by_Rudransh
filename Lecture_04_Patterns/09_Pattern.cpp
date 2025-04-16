// We will make a new pattern
#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Enter pattern size" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << (char)(65 - 1 + n - i + 1 + j - 1) << " ";
            /*First make a rough pattern like
            4
            34
            234
            1234
            Now see write 65-1 for A
            Now see first column. It starts with n and subtracts 1 as i increase by 1.So n+i
            so n-i+1.Now in Rows,it increases so +j.So +j-1
            we add +1 where subtrancting i/j and andd -1 where adding i/j to neutralize 1 initialization of i,j
            */
        }
        cout << endl;
    }
    return 0;
}