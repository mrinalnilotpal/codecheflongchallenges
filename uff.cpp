#include<bits/stdc++.h>
#include<cstring>
#define lli long long int


using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();

    string s;
    cin>>s;

    lli n = s.length();
    lli coun=0;
    for(int i=0; i<n;i++)
    {
        if(s[i] != s[n-i+1])
        {
            coun++;
        }
    }
    cout<<coun;
}
