#include<bits/stdc++.h>
#include<cmath>

#define lli long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    lli n,x,y,total=0;
    cin>>n;
     vector<pair<int , int>> arr;
    while(n--)
    {
       cin>>x>>y;
       arr.push_back(make_pair(x,y));
    }
    sort(arr.begin(), arr.end());

    lli finish=0;
    for(auto ele : arr )
    {
        finish  += ele.first;
        total+=ele.second - finish;
    }
    cout<<total<<" ";
}
