#include <bits/stdc++.h>

using namespace std;


int main()
{
    short n, a;
    int sum = 0, max = 0;
    
    cin >> n;
    
    for (short i = 0; i < n; i++)
    {
        cin >> a;
        sum -= a;
        
        cin >> a;
        sum += a;
        
        if (sum > max) max = sum;
    }

    cout << max;

    return 0;
}

