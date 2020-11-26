#include<bits/stdc++.h>
#include<cmath>

#define lli long long int

using namespace std;

int main()
{
    ios:: sync_with_stdio(0);
    cin.tie(0);

    lli n;

    cin>>n;

    lli arr[n-1];

    for(lli i=1; i<=n-1; i++)
    {
        cin>>arr[i];
    }

    lli sum=0, ssum=0, esum=0;

    esum = n*(n+1)/2;

    for(lli i=1; i<= n-1; i++)
    {
        ssum+= arr[i];
    }
    cout<<esum - ssum<<"\n";
}
