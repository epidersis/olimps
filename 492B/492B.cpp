#include <bits/stdc++.h>

using namespace std;


int main()
{
    short n;
    int l;
    
    cin >> n >> l;
    
    vector<int> p(n);
    vector<int> d(n+1);
    
    for (short i = 0; i < n; i++) cin >> p[i];
    
    sort(p.begin(), p.end());
    
    for (short i = 0; i < n - 1; i++) d[i] = p[i+1] - p[i];
    
    d[n-1] = p[0] * 2;
    d[n] = (l - p[n-1]) * 2;
    
    printf("%.*f", 9, *max_element(d.begin(), d.end()) / 2.0);

    return 0;
}

