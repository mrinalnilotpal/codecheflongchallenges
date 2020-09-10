#include<iostream>

using namespace std;

int main()
{
    long long int n,nsum,i;

    cin>> n;

    nsum = (n*(n+1)/2);

    if((nsum%2)!= 0 )
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES"<<"\n";
        cout<< n/2<<"\n";
       cout<< n<<" ";
       i=n-3;
       while(i>0)
       {
           cout<< i<<" ";
          if((i-1)!=0)
          {
              cout<< i-1 << " ";
          }
           i = i-4;
       }
       cout<<"\n";
       cout<<(n - n/2)<<"\n";

       i=n-1;

       while(i>0)
       {
           cout<< i << " ";
                 if((i-1)!=0)
          {
              cout<< i-1 << " ";
          }
           i = i-4;
       }
       }
        }


