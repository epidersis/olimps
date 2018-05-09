#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n, m, a, cur_a = 1;
    long long int t = 0;
    
    cin >> n >> m;
    
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        
        if (cur_a > a)
        {
            t += n - cur_a + a;
        }
        else
        {
            t += a - cur_a;
        }
        
        cur_a = a;
    }
    
    cout << t;

    return 0;
}

