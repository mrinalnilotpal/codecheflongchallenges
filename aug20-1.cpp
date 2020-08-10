// Example program
#include <iostream>
 
 using namespace std;
 
int main()
{
    int tst,i;
    cin >> tst;
    
    for(i = 1;i <= tst; i++)
    {
        int p,h;
        cin>> h >> p;
        
        while( (h > 0)||(p > 0) )
        {
            h = h-p;
            p = p/2;
        }
        
        if( p <= 0)
        {
            cout << "0" << "\n";
        }
        else 
        {
            cout<< "1"<< "\n";
        }
        
    }
}
