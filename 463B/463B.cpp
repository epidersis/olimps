#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n, c, c_max = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        
        if (c > c_max) c_max = c;
    }
    
    cout << c_max;

    return 0;
}

