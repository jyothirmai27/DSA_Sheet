// GeeksforGeeks - https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/#
// Time Complexity - O(N) + O(N) = O(N)
// Space Complexity - O(N)
//Hashing Technique

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int temp[n+1]={0};
    for(int i=0;i<n;i++)
    {
        temp[arr[i]]++;
    }

    for(int i=1;i<=n;i++)
    {
        if(temp[i]==0)
            cout<<"Missing Number = "<<i<<endl;
        else if(temp[i]==2)
            cout<<"Repeating Number = "<<i<<endl;
    }
    return 0;
}
