#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);

    int n, num, sum = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        
        sum += abs(num);
    }

    cout << sum;
    
    return 0;
}

