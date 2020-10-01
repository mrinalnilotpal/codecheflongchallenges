#include<bits/stdc++.h>
#include<cmath>

#define lli long long int
bool prime(int n);
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    lli n,i;
    cin>>n;

    vector<int> arr;

    for(i=2; i*i<=n; i++)
    {
        while(n%i==0)
        {
            arr.push_back(i);
            cout<<arr[i]<<" ";
            n = n/i;
        }
    }
//    for(i=1; i<=arr.size(); i++)
//    {
//        cout<<arr[i]<<" ";
//    }
}
