#include<bits/stdc++.h>
#include<cmath>
#include<cstring>
#define lli long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    lli t,i;
    cin>>t;

    for(i=1; i<=t; i++)
    {
        lli n,k,j;
        cin>>n>>k;

        lli arr[n];

       for(j=1; j<=n; j++)
       {
           cin>>arr[j];
           if(arr[j]-k <0)
           {
               arr[j]=0;
           }
           else
           {
               arr[j] -=k;
           }
       }

       for(j=1; j<=n; j++)
       {
           cout<<arr[j]<< " ";
       }

    }
}
