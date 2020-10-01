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

    lli n,i;
    cin>>n;

    lli arr[n];

    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    lli best = arr[1], sum = 0;

    for(i=1; i<=n; i++)
    {
        sum = max(arr[i], sum + arr[i]);
        best = max(best,sum);

    }
    cout<<best<<"\n";
}
