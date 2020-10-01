#include<bits/stdc++.h>

#define lli long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    lli n,i;
    cin>>n;

    lli arr[n],*p;

    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    p= &arr[1];
    sort(p,p+n);

    lli k = n/2;
    lli total=0;

    for(i=1; i<=n ; i++)
    {
        total+= abs(arr[k] - arr[i]);
    }
    cout<<total<<"\n";

}
