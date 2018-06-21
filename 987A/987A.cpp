#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    
    short n;
    string s;
    
    map<string, string> gems = {{"purple", "Power"},
                                {"green", "Time"},
                                {"blue", "Space"},
                                {"orange", "Soul"},
                                {"red", "Reality"},
                                {"yellow", "Mind"}};
    cin >> n;
    
    for (short i = 0; i < n; i++)
    {
        cin >> s;
        gems.erase(s);
    }
    
    cout << gems.size() << '\n';
    
    for (auto gem: gems)
    {
        cout << gem.second << '\n';
    }
    
    return 0;
}

