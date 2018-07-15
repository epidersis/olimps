#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);

    int n, m;
    vector<int> nums;
    
    cin >> n >> m;
    nums.resize(n);
    
    for (int i = 0; i < n ; i++)
    {
        cin >> nums[i];
    }
    
    sort(nums.begin(), nums.end());
    
    for (int i = n-1; i >= 0 ; i--)
    {
        m -= nums[i];
        
        if (m <= 0)
        {
            cout << n - i;
            break;
        }
    }

    return 0;
}

