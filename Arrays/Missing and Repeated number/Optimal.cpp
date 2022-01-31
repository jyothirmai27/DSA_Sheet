// Time Complexity - O(5N) - O(N)
// Space Complexity - O(1)
// XOR Method - Bit Manipulation

#include<bits/stdc++.h>
using namespace std;
void fun(int arr[],int n)
{
    int xor_var = arr[0];
    for(int i=1;i<n;i++)
    {
        xor_var = xor_var^arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        xor_var = xor_var^i;
    }
  // logic for finding set bit
    int set_bit = xor_var & ~(xor_var-1);
    int missing = 0, repeated = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] & set_bit)
        {
            missing = missing^arr[i];
        }
        else
        {
            repeated = repeated^arr[i];
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(i & set_bit)
        {
            missing = missing^i;
        }
        else
        {
            repeated = repeated^i;
        }
    }
    // sometimes order may change so to  make sure that missing and repeated are in correct order we use count var to check
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(missing==arr[i])
        {
            count++;
        }
    }
    if(count==0)
    {
        cout<<"Missing = "<<missing<<endl;
        cout<<"Repeated = "<<repeated<<endl;
    }
    else
    {
       cout<<"Missing = "<<repeated<<endl;
       cout<<"Repeated = "<<missing<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    fun(arr,n);
    return 0;
}
