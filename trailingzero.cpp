#include<iostream>
#include<cmath>

using namespace std;

int main()
{
long long int n,i;
long long int coun=0;



cin>>n;

for(i=5;n/i>=1;i=i*5)
{
    coun += n/i;
}
cout<<coun;

}
