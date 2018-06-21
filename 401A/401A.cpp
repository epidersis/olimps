#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);

    int n, x, num, sum = 0;
    
    cin >> n >> x;
    
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        sum += num;
    }
    
    sum = abs(sum);
    
    cout << ceil(1.0 * sum/x);

    return 0;
}

