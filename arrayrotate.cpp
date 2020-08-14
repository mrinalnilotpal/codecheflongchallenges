#include<iostream>

using namespace std;

int main()
{
    int arrsize,d,i,j,temp;
     cin >> arrsize >> d;

    int arr[arrsize];

    for(i=1; i<=arrsize; i++)
    {
        cin>> arr[i];
    }

    while(d>0)
    {
        temp = arr[1];
        for(i=2; i<=arrsize; i++)
        {
           arr[i-1] = arr[i];
        }
        arr[arrsize] = temp;
        d = d-1;
    }

for(i = 1; i<= arrsize; i++)
{
  cout<<arr[i];
}
}
