#include<iostream>
#include<cmath>
#include<bits/stdc++.h>

int power(int x, int y, int p);

using namespace std;

int main()
{
    long long int n,i;

    cin>>n;

    for(i=1; i<=n; i++)
    {
        long long int a,b,k,j,fin;
        cin>> a >> b;

        k=1000000007;

        j = b % k;
       fin =  power(a,b,k);

       cout<< fin <<"\n";

    }
}
int power(int x, int y, int p)
{
    int res = 1;     // Initialize result

    x = x % p; // Update x if it is more than or
                // equal to p

    if (x == 0) return 0; // In case x is divisible by p;

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
