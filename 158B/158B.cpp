#include <bits/stdc++.h>

using namespace std;


int main()
{
    int o, t, th, f;
    o = t = th = f = 0;
    int n, a, count = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 1) o++;
        else if (a == 2) t++;
        else if (a == 3) th++;
        else f++;
    }
    
    count += f;
    count += th;
    o -= th;
    count += t / 2;
    
    if (o < 0) o = 0;
    
    if (t % 2 != 0) t = 1;
    else t = 0;
    
    count += t;
    
    if (o == 0 || t == 0);
    else {
        o -= 2;
    }
    
    if (o < 0);
    else count += ceil(o / 4.0);
    
    cout << count;

    return 0;
}

