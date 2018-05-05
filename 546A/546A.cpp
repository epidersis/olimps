#include <bits/stdc++.h>

using namespace std;

int main()
{
    short k,w;
    int n, price = 0;
    
    cin >> k >> n >> w;
    
    for ( int i = 1; i <= w; i++ )
    {
        price += i*k;
    }
    
    price = price - n;
    
    if ( price < 0 ) cout << 0;
    else cout << price;
}
