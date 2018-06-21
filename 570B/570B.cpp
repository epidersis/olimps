#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);

    int n, m;
    
    cin >> n >> m;
    
    if (n == 1) cout << m;
    else if (n - m > m - 1) cout << m+1;
    else cout << m-1;

    return 0;
}

