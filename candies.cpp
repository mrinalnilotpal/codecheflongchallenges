#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstring>

#define lli long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    lli t,i;
    cin>>t;

    for(i=1; i<=t; i++)
    {
        lli n,k,j,*p;
        cin>>n>>k;

        lli arr[n],coun=0;

        for(j=1;j<=n;j++)
        {
            cin>>arr[j];
        }
        p = &arr[1];
        sort(p,p+n);

        for(j=1;j<=n;j++)
        {
            while(arr[j]<=k)
            {
                arr[j]+=arr[1];
                coun+=1;
            }
        }
        cout<<coun<<"\n";

    }
}
