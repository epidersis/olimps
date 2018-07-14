#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);

    int qty = 0;
    string s;
    
    cin >> s;
    
    for (int i = 0; i < s.size()/2; i++)
    {
        if (s[i] != s[s.size()-1-i])
        {
            qty++;
            
            if (qty > 1)
            {
                cout << "NO";
                return 0;
            }
        }
    }

    if (qty == 0 && s.size()%2 == 0) cout << "NO";
    else cout << "YES";
    
    return 0;
}

