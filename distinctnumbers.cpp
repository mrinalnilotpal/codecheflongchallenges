#include<iostream>

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,i,coun=0;
    long long  int *p;
    cin >> n;

    long long int arr[n];

    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    p = &arr[1];

    sort(p, p+n);

for(i=1; i<=n; i++)
  {
      if(arr[i] != arr[i+1])
      {
          coun++;
      }
  }
  cout<<coun<<"\n";

}
