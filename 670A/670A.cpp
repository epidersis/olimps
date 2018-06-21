#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);

    int n, min, max;
    
    cin >> n;
        
    min = 2*(n/7) + (n%7 == 6 ? 1:0);
    max = 2*(n/7) + ((n%7 >= 1 ? n%7 >= 2 ? 2 : 1 : 0));
    
    cout << min << ' ' << max;

    return 0;
}

