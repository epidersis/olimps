#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    
    vector<int> hs(n);
    
    for (int i = 0; i < n; i++) cin >> hs[i];
    
    cout << *max_element(hs.begin(), hs.end());

    return 0;
}

