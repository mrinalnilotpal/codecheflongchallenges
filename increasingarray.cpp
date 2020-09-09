#include<iostream>

using namespace std;

int main()
{
    long long int n,i;
    long long int coun=0,maxi;
    cin>> n;

   long long int arr[n];

    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    maxi=arr[1];

    for(i=1;  i<=n; i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
    }
    if(n==1)
    {
     cout << 0;

    }
  else {
        i=1;
        while(i<=n)
       {
         if(arr[i+1] < arr[i])
         {
           coun = coun+(arr[i]-arr[i+1]);
           arr[i+1] = arr[i];
           i=i+1;
         }
         else if((i==n) && (maxi != arr[n]))
         {
             coun=coun+(maxi-arr[n-1]);
             i=i+1;
         }
         else if(n==1)
         {
             cout<< 0;
         }
          else
          {
           i=i+1;
          }
    }
    cout << coun;
  }
}
