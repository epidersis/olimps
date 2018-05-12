#include <bits/stdc++.h>

using namespace std;


int main()
{
    short n, m, a;
    short max_d = 0, max_i;
    
    cin >> n >> m;
    
    for (short i = 0; i < n; i++)
    {
        cin >> a;
        
        if (ceil(float(a) / m) >= max_d)
        {
            max_d = ceil(float(a) / m);
            max_i = i;
        }
    }
    
    cout << max_i+1;

    return 0;
}

