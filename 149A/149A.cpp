#include <bits/stdc++.h>

using namespace std;


int main()
{
    short k, count = 0, sum = 0;
    
    cin >> k;
    
    short a[12];
    
    for ( int i = 0; i < 12; i++ )
    {
        cin >> a[i];
    }
    
    sort(a,a+12);
    
    for ( int i = 11; i >= 0; i-- )
    {
        if ( k == 0 )
        {
            break;
        }
        sum += a[i];
        count++;
        if ( sum >= k ) 
        {
            break;
        }
        
    }
    
    if ( sum < k ) cout << -1;
    else cout << count;
}
