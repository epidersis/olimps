#include <bits/stdc++.h>

using namespace std;


int main()
{
    short n;
    cin >> n;
    
    int *notes = new int[n];
    
    for (short i = 0; i < n; i++) cin >> notes[i];
    
    if (any_of(notes, notes+n, [](int k){ return k == 1; }))
    {
        cout << -1;
    }
    else
    {
        cout << 1;
    }
    
    return 0;
}
