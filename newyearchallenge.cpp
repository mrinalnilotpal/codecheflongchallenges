#include<iostream>
#include<cmath>

using namespace std;
bool verychaotic(int arra[], int size);

int main()
{
    int arrsize,i;
    cin >> arrsize;

    int arr[arrsize];
    for(i=1 ; i<=arrsize;i++)
    {
        cin>> arr[i];
    }
    if(verychaotic(arr, arrsize))
    {
        cout<<"Too Chaotic";
    }
    else
        cout<<"Manageable";
}

bool verychaotic(int arra[],int arrsize)
{
    int i,j;
    for(i=1; i<=arrsize; i++)
    {
       if(abs((arra[i] - arra[i+1] > 2) && (arra[i] - arra[i+2] > 2)))
       {
           return true;
       }
       else
       {
           return false;
       }
    }
}
