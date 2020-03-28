#include<iostream>

using namespace std;

int main()
{
    int n=5, r, c;
    
    for ( r = 0; r < n; r++)
    {
        for ( c = 0; c <= n; c++)
        {
            if (c == 1 || ((r == 0 || r == n-1) && 
               (c > 1 && c < n-2)) || (c == n-2 && 
                r != 0 && r != n-1)) 
                cout<< "*";
                     else
                cout<< " ";  
        } 

    cout<< endl; 
    }
    
    return 0;
}
