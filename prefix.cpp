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

    lli t,i;
    cin>>t;

    for(i=1; i<=t; i++)
    {
        lli n,k,coun,j;

        cin>>n>>k;

        lli arr[n];

        if(n%2==0)
        {
            for(j=1; j<=n; j++)
            {
                if(j%2==0)
                {
                    arr[j]= j ;
                }
                else
                {
                    arr[j]= -j;
                }
            }
        }
        else
        {
            for(j=1; j<=n; j++)
            {
                if(j%2==0)
                {
                    arr[j]= -j ;
                }
                else
                {
                    arr[j]= j;
                }
            }
        }

     lli sun[n];
     for(lli k=1; k<=n;k++)
     {
         sun[k]=0;
     }

     for(lli k=1; k<=n;k++)
     {
         sun[k]+= arr[k];
     }


        for(j=1; j<=n; j++)
        {
            cout<<arr[j]<<" ";
        }

     for(lli k=1; k<=n;k++)
     {
         cout<<sun[k]<<" ";
     }


    }

    }

