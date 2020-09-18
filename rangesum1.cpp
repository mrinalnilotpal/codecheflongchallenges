#include<iostream>
#include<bits/stdc++.h>

#define lli long long int

using namespace std;

int main()
{
    cin.tie(NULL);

    lli n,q,i,sum=0,j,a,b;

    cin>>n>>q;

    lli arr[n+1];

    arr[0]==0;
    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    for(i=1; i<=n; i++)
    {
        sum = arr[i] + sum;
        arr[i] = sum;

    }
//    for(i=1; i<=n; i++)
//    {
//        cout<<arr[i]<<" ";
//    }

    for(j=1; j<=q; j++)
    {
        cin>>a>>b;
        if(a==1)
        {
            cout<< arr[b-a+1] - arr[a-1]<<"\n";
        }
        else{
        cout<< arr[b] - arr[a-1]<<"\n";
    }
    }
}
