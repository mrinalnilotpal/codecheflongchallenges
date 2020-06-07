#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int t,i;
    cin>> t;
    
    for(i=1 ; i<=t ; i++)
    {
        int n = 100000,j;
        int count = 0;
        char s[n] ;
        
        for(j = 1;j<n;j++)
        {
            cin>>s[j];
        }
        
        char x,y;

        while(j<=n)
        {
            if((s[j]== x && s[j+1]== y) || (s[j]== y && s[j+1] == x ))
            {
                count += 1;
                j = j+2;
            }
            else
            {
                j +=1;
            }
        }
        cout << count<< "\n";
    }
}
