#include<iostream>
#include<bits/stdc++.h>
#include<vector>


int sumof(long long int arr[], long long int siz,long long int key );

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, x,i=1,*p;

    cin>>n>>x;

    long long int ar[n];

    for(i=1; i<=n; i++)
    {
        cin>>ar[i];
    }

    p = &ar[1];

    sort(p,p+n);

    sumof(ar,n,x);

}

int sumof(long long int arr[], long long int siz,long long int key )
{
    long long int i,j,z;
    while(i<=siz && arr[i]<key)
    {
        z = key-arr[i];

        for(j=1; j<=siz; j++)
        {
            if(arr[j]==z)
            {
                cout<< i <<" "<<j;
            }
            else if(j==siz+1)
            {
                cout<<"IMPOSSIBLE";
            }
        }
    }
}
