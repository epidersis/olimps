#include <bits/stdc++.h>

using namespace std;


int gcd(int a, int b)
{
    while (a != 0 && b != 0)
    {
        if (a > b) a %= b;
        else b %= a;
    }
    
    return a+b;
}


int main()
{
    short n, ones = 0, min = 2001;
    int temp_gcd;
    cin >> n;
    
    vector<int> a(n);

    for (short i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] == 1) ones++;
    }
    
    if (ones > 0)
    {
        cout << n - ones;
        return 0;
    }
    
    for (short l = 0; l < n; l++)
    {
        temp_gcd = a[l];
        
        for (short r = l+1; r < n; r++)
        {    
            temp_gcd = gcd(temp_gcd, a[r]);
            
            if (temp_gcd == 1)
            {
                if (min > r - l) min = r - l;
                break;
            }
        }
    }
    
    if (min == 2001) cout << "-1";
    else cout << min + n - 1;
    
    return 0;
}

