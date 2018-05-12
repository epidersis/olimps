#include <bits/stdc++.h>

using namespace std;


int main()
{
    char f;
    short n, d, foes = 0, count = 0, max_count = 0;
    cin >> n >> d;
    
    for (short i = 0; i < d; i++)
    {
        for (short j = 0; j < n; j++)
        {
            cin >> f;
            foes += f - 48;
        }
        
        if (foes != n)
        {
            count++;
        }
        else
        {
            if (count > max_count) max_count = count;
            count = 0;
        }
        
        foes = 0;
    }
    
    if (count > max_count) max_count = count;
    
    cout << max_count;

    return 0;
}

