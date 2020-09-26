#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
#include<cstring>

#define lli long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t,i;
    cin>>t;

    for(i=1; i<=t; i++)
    {
        int n,j;
        cin>>n;

        int arr[n];

        for(j=1; j<=n; j++)
        {
            cin>>arr[j];
        }
        int sum=0;

        for(j=1; j<=n; j++)
        {
            sum+=arr[j];
        }
        j=n;
        while(sum>=0 && j>0)
        {
            if((sum - j)<0)
            {
                j-=1;
            }
            else if((sum -j)>0)
            {
                sum-=j;
                j-=1;
            }
            else if(sum==0)
            {
                j-=1;
            }
        }
        if(sum==0)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
}
