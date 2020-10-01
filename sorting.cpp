#include<bits/stdc++.h>
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

    vector<lli> v(n);

    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    for(i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }

}
