#include<iostream>

using namespace std;

int main()
{
  int n,i,j,k;

  cin >> n ;

  int arr[100],coun[100];

  for(i=1; i<=n; i++)
  {
      cin >> arr[i];
  }
 for(k=1; k<=100; k++)
 {
     coun[k]=0;
 }
for(j=1;j<=100;j++)
{
    for(i=1; i<=n; i++)
    {
        if(arr[i]== j)
        {
            coun[k] = coun[k]+1;
        }
    }
}
for(k=1;k<=n; k++)
{
    coun[k] = coun[k]%2;
}
 int finnum=0;
 for(k=1;k<=n; k++)
{
    finnum = finnum + coun[k];
}
cout<< finnum;
}
