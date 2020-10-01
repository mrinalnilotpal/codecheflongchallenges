#include<bits/stdc++.h>
#include<iostream>

#define lli long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    lli n,i,j;
    cin>>n;

    lli arr[n],lent[n];

    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    for(j=1; j<=n; j++)
    {
        lent[j]=1;
        for (int i = 1; i <= j; i++)
            {
               if (arr[i] < arr[j])
                {
                 lent[j] = max(lent[j],lent[i]+1);
}
}
}
    for(j=1; j<=n; j++)
    {
        cout<<lent[j]<<" ";
    }
}
