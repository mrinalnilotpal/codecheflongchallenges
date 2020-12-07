#include<bits/stdc++.h>
#include<cstring>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define lli long long int
#define const 1e9+7

using namespace std;

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);


    int t,i;
    cin>>t;

    for(i=1; i<=t; i++)
    {
        lli a,b, num1, num2,total;
         cin>>a >>b;

        if(a%2==0 && b%2==0)
        {
            total  = 2*(a/2*b/2);
            cout<<total<<"\n";
        }
        else if(a%2!=0 && b%2==0)
        {
            total = ((a/2+1)*(b/2)) + ((a/2)*(b/2));
            cout<<total<<"\n";
        }
        else if(a%2==0 && b%2!=0)
        {
            total = ((a/2)*(b/2+1)) + ((a/2)*(b/2));
            cout<<total<<"\n";
        }
        else if(a%2!=0 && b%2!=0)
        {
            total = ((a/2+1)*(b/2+1)) + ((a/2)*(b/2));
            cout<<total<<"\n";
        }
    }



}
