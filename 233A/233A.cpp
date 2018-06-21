#include <bits/stdc++.h>

using namespace std;


int main()
{
    //ios::sync_with_stdio(false);
    
    short int n;    
    
    cin >> n;
    
    if (n % 2 != 0)
    {
        cout << -1;
        return 0;
    }
    
    for (short int i = n; i > 0; i--) cout << i << ' ';

    return 0;
}

