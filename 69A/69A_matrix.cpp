#include <bits/stdc++.h>

using namespace std;

int main()
{
    short n;
    
    cin >> n;
    
    short a[n][3], count = 0;
    
    for ( short i = 0; i < n; i++ )
    {
        for ( short j = 0; j < 3; j++ )
        {
            cin >> a[i][j];
        }
    }
    
    for ( short j = 0; j < 3; j++ )
    {
        for ( short i = 0; i < n; i++ )
        {
            count += a[i][j];    
        }
        
        if ( count == 0 ) continue;
        else {
            cout << "NO";
            break;
        }
    }
    if ( count == 0 ) cout << "YES";
}
