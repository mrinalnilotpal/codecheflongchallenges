#include<bits/stdc++.h>
#include<cstring>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define lli long long int
#define const 1e9+7

using namespace std;

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    int day1,cap1,day2,cap2,target;

    cin>>day1>>cap1>>day2>>cap2>>target;

    int sum=0, coun=0;

    while(sum<target)
    {
        coun++;
        if(day1<=coun && day2<=coun)
        {
            sum+=cap1+cap2;
        }
        else if(day1>coun && day2<=coun)
        {
            sum+=cap2;
        }
        else if(day1<=coun && day2>coun)
        {
            sum+=cap1;
        }
    }
    cout<<coun<<" ";
}
