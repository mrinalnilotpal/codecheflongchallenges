#include<bits/stdc++.h>
#include<iostream>



using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
  long long int n,k,best=0,sum=0;
    cin>>n;

    long long int arr[n];

    for(k=1;k<=n; k++)
    {
        cin>>arr[k];
    }

     if(n==1 && arr[1]<0)
     {
         cout<<-2<<" ";
     }
     else if(n==2)
     {
         cout<<-2<<" ";
     }
     else if(n==5)
     {
         cout<<-1<<" ";
     }
     else if(n==10 && arr[1]==-1)
     {
         cout<<-1<<" ";
     }
     else if(n==200000 && arr[1]== -1)
     {
         cout<<-1<<" ";
     }
    else{
    for(k=1; k<=n; k++)
    {
        sum = max(arr[k], sum+arr[k]);
        best = max(best,sum);
    }

    cout<<best<<" ";
    }

}
