#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    long long int n,i,coun,remainder;

    cin >> n;


    i = 1;
    while(remainder>=1)
    {
        remainder = n/(pow(5,i));
        coun +=remainder;
        i = i+1;
    }
    cout<< coun ;
}
