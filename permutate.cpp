#include<iostream>

using namespace std;

int main()
{
    long long int sizarr,i;

    cin>> sizarr;

    if((sizarr==3) || (sizarr == 2))
    {
        cout<<"NO SOLUTION";
    }
    else if(sizarr == 1)
    {
        cout<<1;
    }
    else if(sizarr>=4)
    {
        long long int mid,arr[sizarr];
        mid = sizarr/2;

        for(i=1; i<=mid; i++)
        {
            arr[i] = 2*i;
            cout<< arr[i]<<" ";
        }
        for(i=(mid+1); i<=sizarr; i++)
        {
            arr[i] = 2*(i-(mid+1)) + 1;
            cout<<arr[i]<<" ";
        }
    }
}
