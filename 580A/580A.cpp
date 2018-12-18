#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    
    int max = 1;
    int c_max = 1;
    
    int p;
    int c;
    
    
    cin >> n;
    cin >> p;
    
    for (int i = 0; i < n - 1; i++)
    {
        cin>>c;
        
        if (c >= p)
        {
            c_max++;
        }
        else
        {
            if (c_max > max)
            {
                max = c_max;
            }
            c_max = 1;
        }
        
        p = c;
    }
    
    if (c_max > max) cout << c_max;
    else cout << max;
    
    return 0;
}
