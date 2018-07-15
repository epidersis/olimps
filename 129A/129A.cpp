#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);

    int n, a, odds = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        
        if (a % 2 != 0)  odds++;
    }
    
    if (odds % 2 == 0) cout << n - odds;
    else cout << odds;

    return 0;
}

