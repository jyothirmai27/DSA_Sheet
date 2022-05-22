#include<bits/stdc++.h>
using namespace std;
//using OR operator
bool isEven(int n)
{
   if((n|1) == n+1)
    {
        return true;
    }
    // n|1 == n
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

