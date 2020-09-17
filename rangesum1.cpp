#include<bits/stdc++.h>
#include<algorithm>

#define lli long long int
using namespace std;

int main()
{
    ios:: sync_with_stdio(0);
    cin.tie(NULL);

    lli n,q,i,a,b,sum,j;

    cin>>n>>q;

     lli arr[n];

     for(i=1; i<=n; i++)
     {
         cin>> arr[i];
     }


     for(j=1; j<=q; j++)
        {
            cin>>a>>b;
            sum=0;
         for(i=a; i<=b; i++)
          {
          sum+= arr[i];
          }
     cout<<sum<<"\n";
     }
}
