#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);

    char seq[] = "v<^>v<^>";
    char b, e;
    int secs;
    
    cin >> b >> e >> secs;
    
    int pos = 0;
    for (;;)
    {
        if (seq[pos] == b) break;
        pos++;
    }
    
    if (secs % 2 == 0)
    {
        cout << "undefined";
    }
    else if (seq[pos + secs%4] == e)
    {
        cout << "cw";
    }
    else
    {
        cout << "ccw";
    }

    return 0;
}

