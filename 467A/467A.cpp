#include <bits/stdc++.h>

using namespace std;


int main()
{
    short n, p, q, count = 0;
    
    cin >> n;
    
    for (short i = 0; i < n; i++)
    {
        cin >> p >> q;
        
        if (q - p >= 2) count++;
    }
    
    cout << count;

    return 0;
}

