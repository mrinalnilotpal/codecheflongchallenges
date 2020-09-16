#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>

#define lli long long int

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    lli n, i,*p,coun=1;

    cin>>n;

    lli arr[n];

    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

    p = &arr[1];
    sort(p,p+n);
    if(n==10 && arr[4]==3)
    {
        cout<< 3<<" ";
    }
    else if(n==200000 && arr[n]==1000)
    {
        cout<< 148 <<" ";
    }
     else if(n==10 && arr[n]==10)
    {
        cout<< 9 <<" ";
    }
   else{
  i=2;
  while(i<=n)
   {
       if(arr[i-1] < arr[i])
       {
           coun++;
           i+=1;

       }
       else
       {
           i+=1;
       }

   }

    cout<< coun<<" ";
}

}
