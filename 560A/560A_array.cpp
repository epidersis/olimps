#include <bits/stdc++.h>


using namespace std;

int main ()
{
    short n;
    
    cin >> n;
    
    int *a = new int[n];
    
    for ( int i = 0; i < n; i++ )
    {
         cin >> a[i];
    }
    
    for ( int i = 0; i < n; i++ )
    {
        if ( a[i] == 1 ) 
        {
            cout << -1;
            return 0;
        }
    }
    cout << 1;
}
