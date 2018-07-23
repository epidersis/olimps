#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);

    int n, min, max, glob_min, glob_max, len, num;
    
    cin >> n;
    
    cin >> min >> max;
    
    glob_min = min;
    glob_max = max;
    len = max - min;
    num = 1;
    
    for (int i = 1; i < n; i++)
    {
        cin >> min >> max;
        
        if (min < glob_min) glob_min = min;
        if (max > glob_max) glob_max = max;
        
        if (len < max - min)
        {
            len = max - min;
            num = i + 1;
        }
    }
    
    if (len >= glob_max - glob_min)
    {
        cout << num;
    }
    else
    {
        cout << -1;
    }

    return 0;
}

