#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    lli n;
    cin>>n;


    while(n!=1)
    {
        if(n%2==0)
        {
            cout<<n<<" ";
            n = n/2;
        }
        else
        {
            cout<<n<<" ";
            n = 3*n+1;
        }
    }
    cout<<1;

}
