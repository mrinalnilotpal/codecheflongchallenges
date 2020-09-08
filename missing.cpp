#include<iostream>

using namespace std;

int main()
{
    long long int n,sum=0,totalsum=0,i;
    cin>>n;

    long long int arr[n];

    for(i=1; i<n; i++)
    {
        cin>> arr[i];
    }
        for(i=1; i<n; i++)
    {
        sum=sum + arr[i];
    }
  totalsum= (n*(n+1)/2);
  cout<< totalsum - sum;
}
