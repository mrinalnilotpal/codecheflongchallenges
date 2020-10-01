#include<bits/stdc++.h>
#include<cmath>

#define lli long long int
bool prime(int n);
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    lli n,k;
    cin>>n;

    k = prime(n);
    if(k)
    {
        cout<<"prime"<<"\n";
    }
    else
    {
        cout<<"NOT PRIME";
    }
}
bool prime(int n) {
if (n < 2) return false;
for (int x = 2; x*x <= n; x++) {
if (n%x == 0) return false;
}
return true;
}
