#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long int testcs,i;

    cin>>testcs;

    for(i=1; i<=testcs; i++)
    {
        long long int x,y,result,m;

        cin>>y>>x;

         m = max(y,x);

         result = (m*(m-1))+( 1 )+(pow(-1,m)*(y-x));

         cout<<result<<"\n";
    }
}
