#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;
    short count = 0; 
    long long int sum = 0, min;
    cin >> n;
    
    long long int a[n];
    
    for ( int i = 0; i < n; i++ )
    {
        cin >> a[i];
        if ( a[i] %2 != 0 ) 
        {
            min = a[i];
            count++;
        }
    }
    
    if ( count%2 == 0 ) {
        for ( int i = 0; i < n; i++ )
        {
            sum += a[i];
        }
        cout << sum;
    }
    
    else {
        for ( int i = 0; i < n; i++ )
        {
            if ( a[i] %2 != 0 && a[i] < min ) min = a[i];
        }
        
        for ( int i = 0; i < n; i++ )
        {
            sum += a[i];
        }
        cout << sum - min;
    }    
    
}
