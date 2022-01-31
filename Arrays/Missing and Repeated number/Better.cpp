// Time Complexity - O(N)
// Space Complexity - O(1)
// Mathematical Logic :  missing number =  (s + p/s)/2;
 // s = s - arr[i]; // s = sum of ele form 1 to n
 // p = p - (arr[i]*arr[i]); // p = sum of squares of ele from 1 to n
// Draw back - for larger input time limit may exceed due to computation of squares

#include<bits/stdc++.h>
using namespace std;
void fun(int arr[],int n)
{
   int s = (n*(n+1))/2;
   int p = (n*(n+1)*((2*n)+1))/6;
   for(int i=0;i<n;i++)
   {
       s = s - arr[i];
       p = p - (arr[i]*arr[i]);
   }
   int missing = 0;
   missing = (s + p/s)/2;
   int repeated = 0;
   repeated = (missing - s);
   cout<<"Missing = "<<missing<<endl;
   cout<<"Repeated = "<<repeated<<endl;
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
