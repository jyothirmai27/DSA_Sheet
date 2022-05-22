// C++ program to check for even or odd
// using Bitwise XOR operator

#include<bits/stdc++.h>
using namespace std;
// using XOR operator
bool isEven(int n)
{
    if((n^1) == n+1)
    {
        return true;
    }
    // for odd number  - n^1 == n-1
    return false;

}
int main()
{
    int n;
    cout<<"enter n = ";
    cin>>n;
    isEven(n);
    if(isEven(n))
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
    return 0;
}
