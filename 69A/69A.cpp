#include <bits/stdc++.h>

using namespace std;


int main()
{
    short n, num;
    short x, y, z;
    
    x = y = z = 0;
    
    cin >> n;
    
    for (short i = 0; i < n; i++)
    {
        cin >> num;
        x += num;
        
        cin >> num;
        y += num;
        
        cin >> num;
        z += num;
    }
    
    if (x != 0 || y != 0 || z != 0) cout << "NO";
    else cout << "YES";

    return 0;
}

