#include <bits/stdc++.h>

using namespace std;


int main()
{
    short n, m;
    short a = -1, b, x;
    
    cin >> n >> m;
    
    for (short i = ceil(n / 2.0); i <= n; i++)
    {
        if (i % m == 0)
        {
            x = i / m;
            a = i - x*m;
            b = i - 2*a;
            break;
        }
    }
    
    if (a == -1) cout << -1;
    else cout << a + b;

    return 0;
}

