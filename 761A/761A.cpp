#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);

    int a, b;
    
    cin >> a >> b;
    
    if ((a > 0 || b > 0) && abs(b-a) <= 1) cout << "YES";
    else cout << "NO";

    return 0;
}

