#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);

    int n, hi, vi, day = 1;
    vector<int> h, v;
    
    cin >> n;

    h.resize(n);
    v.resize(n);
    
    for (int i = 0; i < pow(n, 2); i++)
    {
        cin >> hi >> vi;
        
        if (!h[hi-1] && !v[vi-1])
        {
            h[hi-1] = v[vi-1] = 1;
            cout << day << ' ';
        }
        
        day++;
    }
    

    return 0;
}

