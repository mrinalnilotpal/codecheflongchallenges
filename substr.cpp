#include<bits/stdc++.h>
#include<vector>
#include<cmath>
using namespace std;
int allsub(int arr[], int n);
int main()
{
    int n,i,j;
    cout<<"Enter the array size:"<<"\n";
    cin>>n;

    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>> arr[i];
    }

    allsub(arr,n);


}

int allsub(int arr[], int n)
{
    int coun = pow(2,n);

    for(int i=0; i<coun; i++)
    {
        for(int j=0; j<n; j++)
        {
            if((i&(1<<j))!=0)
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<"\n";
    }
}
