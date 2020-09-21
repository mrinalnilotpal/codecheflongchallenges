#include<bits/stdc++.h>
#define lli long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    lli n;
    cin>>n;

    cout<<n<<" ";
    while(n>1)
    {
        if(n%2==0)
        {
            n/=2;
            cout<<n<<" ";
        }
        else
        {
            n = 3*n + 1;
            cout<< n <<" ";
        }
    }
}
