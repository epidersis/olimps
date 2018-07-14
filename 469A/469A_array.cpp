#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);

    int n, x, y;
    
    cin >> n >> x;
    
    int *a = new int[n];
    int *b = new int[x];
    
    for (int i = 1; i <= n; i++)
    {
        a[i-1] = i;
    }
    
    for (int i = 0; i < x; i++)
    {
        cin >> b[i];
    }
    
    cin >> y;
    int *c = new int[y];

    for (int i = 0; i < y; i++)
    {
        cin >> c[i];
    }
    
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i] == a[j]) a[j] = -1;
        }
    }
    
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (c[i] == a[j]) a[j] = -1;
        }
    }
    
    bool flag = true;
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] != -1)
        {
            flag = false;
            break;
        }
    }
    
    if (flag) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";

    return 0;
}

