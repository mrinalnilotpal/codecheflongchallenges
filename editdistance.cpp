#include<bits/stdc++.h>
#include<iostream>
#define lli long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    lli n,i,j,target;
    cin>>n>>target;

    lli arr[n];

    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

 i=1;
 j=1;
lli  sum = 0;
 while(i<=n && j<=n)
 {
     if(arr[i]+arr[j]==target)
     {
         cout<<"Subarray starting from "<< i << "to "<<j;
     }
     else if(sum<target)
     {
         j+=1;
         sum+=arr[j];
     }
     else
     {
         sum-= arr[i];
         i+=1;
     }
 }
 cout<<sum;

}
