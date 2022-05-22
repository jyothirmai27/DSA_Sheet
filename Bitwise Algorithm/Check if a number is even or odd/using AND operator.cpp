#include<bits/stdc++.h>
using namespace std;
// using AND operator
bool isEven(int n)
{
    if((n&1) == 0)
    {
        return true;
    }
    // n&1 == 1
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

