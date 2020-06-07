#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int t,i;
    for(i=1 ; i<=t ; i++)
    {
        int n;
        
        int count = 0;
        char s[] = cin >> ; 
        n = strlen(s)
        
        int j=1;
        while(j<=n)
        {
            if((s[j]=="x" && s[j+1]=="y") || (s[j]=="y" && s[j+1] =="x" ))
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
