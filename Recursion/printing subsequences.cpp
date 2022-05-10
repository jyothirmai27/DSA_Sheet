
#include<bits/stdc++.h>
using namespace std;
void printSubSequences(int arr[],int ind,int n,vector<int> &v)
{
    if(ind>=n)
    {
        for(auto it:v)
        {
            cout<<it<<" ";
        }
        if(v.size()==0)
        {
            cout<<"{}"<<" ";
        }
        cout<<endl;
        return;
    }
    v.push_back(arr[ind]);
    printSubSequences(arr,ind+1,n,v);
    v.pop_back();
    printSubSequences(arr,ind+1,n,v);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> v;
    printSubSequences(arr,0,n,v);
    return 0;
}

