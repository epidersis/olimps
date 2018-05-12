#include <bits/stdc++.h>

using namespace std;


int main()
{
    bool s = true;
    
    short n;
    int count = 0;
    cin >> n;
    
    count = ceil(n/2.0) * ceil(n/2.0) + (n/2) * (n/2);
    cout << count << endl;
    
    for (short i = 0; i < n; i++)
    {
        for (short j = 0; j < n; j++)
        {
            if (s)
            {
                cout << 'C';
                s = false;
            }
            else
            {
                cout << '.';
                s = true;
            }
        }
        
        if (n % 2 == 0) s = !s;
        cout << endl;
    }

    return 0;
}

