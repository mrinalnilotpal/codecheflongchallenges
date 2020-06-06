
#include<iostream>

using namespace std;

int main()
{
    int t,i;
    int revloss;
    
    cin>> t;
    
    for(i = 1; i <= t ; i++)
    {
        int n,k;
       
        cin>> n >> k;
        
        int initrev = 0, p[n],j;
        int finrev = 0;
        
        for(j = 1;j<=n;j++)
        {
            cin>> p[j];
        }
       
       for(j = 1; j<=n; j++)
       {
           initrev += p[j];
       }
       
       for(j = 1; j <= n;j++)
       {
           if(p[j]>=k)
           {
               p[j] = k;
           }
           else
           {
               p[j] = p[j];
           }
       }
       
       for(j = 1; j<= n; j++)
       {
           finrev += p[j];
       }
          revloss = initrev - finrev;
        
        cout<<revloss<<"\n";
    }
   
}
