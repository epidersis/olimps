#include <bits/stdc++.h>

using namespace std;


int main()
{
    short n, b, a;
    string t;
    
    cin >> n;
    
    for (short i = 0; i < n; i++)
    {
        cin >> t >> b >> a;
        
        if (b >= 2400 && a - b > 0)
        {
            cout << "YES";
            return 0;
        }
    }
    
    cout << "NO";
    return 0;
}

