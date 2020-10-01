#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<cstring>

#define lli long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    lli n1,n2,i,j;
    cin>>n1>>n2;

    lli arr[n1],arr1[n2];

    for(i=1; i<=n1; i++)
    {
        cin>>arr[i];
    }
    for(j=1; j<=n2; j++)
    {
        cin>>arr1[j];
    }

    lli *p,*q;
    p = &arr[1];
    q = &arr1[1];

    sort(p,p+n1);
    sort(q,q+n2);

    lli coun=-1;

    i = 1;
    j = 1;
    while(i<=n1 && j<=n2)
    {
        if(arr[i]==arr[j])
        {
            coun++;
            i+=1;
            j+=1;
        }
        else if(arr[i]>arr1[j])
        {
            j++;
        }
        else{
            i++;
        }
    }
    cout<<coun<<" ";
}


