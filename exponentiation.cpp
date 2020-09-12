#include<iostream>
#include<cmath>

using namespace std;

int main()
{
   unsigned long long  int ncal,i;

    cin>>ncal;

    for(i=1; i<=ncal; i++)
    {
        long long int a , b , knst, fin=1 ;

        cin>> a >> b;
       knst = 1000000007;

       while(b>0)
       {
           fin  = (fin * a) % knst;
           b = b-1;
       }
       cout<< fin <<"\n";
    }
}
