#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);

    int n, B, balance = 0, qty = 0;
    vector<int> a, prices;
    
    cin >> n >> B;
    a.resize(n);
    
    for (int i = 0; i < n; i++) cin >> a[i];
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2) balance++;
        else balance--;
        
        if (balance == 0 && i != n - 1)
        {
            prices.push_back(abs(a[i+1] - a[i]));
        }
    }
    
    if (balance == 0)
    {
        sort(prices.begin(), prices.end());
        
        for(int i = 0; i < prices.size(); i++)
        {
            B -= prices[i];
            
            if (B >= 0)
            {
                qty++;
            }
        }
        
        cout << qty;
    }
    else
    {
        cout << 0;
    }

    return 0;
}

