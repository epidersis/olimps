#include <bits/stdc++.h>

using namespace std;


int main()
{
    string t;
    short n, b, a;
    cin >> n;
    
    for (short i = 0; i < n; i++)
    {
        cin >> t >> b >> a;
        
        if (b >= 2400)
        {
            if (a - b > 0)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    
    cout << "NO";

    return 0;
}

