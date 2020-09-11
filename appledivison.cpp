#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main()
{
    int numapple,i,j=1,k=1;
    cin>> numapple;

    long long int applwt[numapple],arr1[numapple],arr2[numapple],sum1=0,sum2=0,diff1=0,diff2=0;

    for(i=1; i<=numapple; i++)
    {
        cin>>applwt[i];
    }

    i=1;

   while(i<=numapple)
   {
      for(j=1;j<=i; j++)
      {
          sum1 = arr[j] + applwt[i];
          diff1 = abs(sum1-sum2);
      }
            for(k=1;k<=i; k++)
      {
          sum2 += applwt[i];
          diff2 = abs(sum1-sum2);
      }

      if(diff1 <= diff2)
      {
          arr1[j]= applwt[i];
          j++;
      }
      else
      {
        arr2[k] = applwt[i];
        k++;
      }
      i = i+1;
   }
   cout<< min(diff1,diff2);

}
