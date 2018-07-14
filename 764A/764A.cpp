#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);

    int n, m, tm, z, qty = 0;
    
    cin >> n >> m >> z;
    
    if (n > m) swap(n, m);
    
    tm = m;
    
    while(1)
    {
        if (m > z) break;
        if (m % n == 0) qty++;

        m += tm;
    }
    
    cout << qty;

    return 0;
}

