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
        lli numpeeps, maxtest,j,coun=0;
        cin>>numpeeps>>maxtest;

        lli arr[numpeeps],temp,fin;

        for(j=1; j<=numpeeps; j++)
        {
            cin>>arr[j];
        }
        for(j=1; j<=numpeeps; j++)
        {
         if(arr[j]<=9 || arr[j]>=80)
        {
              coun++;
        }

        }
        if(coun%maxtest==0)
        {
            temp = coun/maxtest;
        }
        else
        {
            temp = coun/maxtest + 1;
        }

        if((numpeeps - coun)% maxtest==0)
            {
            fin = temp + ((numpeeps - coun)/maxtest);
        }
        else
        {
            fin = temp + ((numpeeps - coun)/maxtest + 1);
        }

        cout<<fin<<"\n";
    }

}
