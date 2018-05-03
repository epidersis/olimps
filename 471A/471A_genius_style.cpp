#include <bits/stdc++.h>

using namespace std;


int main()
{
    short l;
    map<short, short> ls;
    
    for (short i = 0; i < 6; i++)
    {
        cin >> l;
        ls[l] += 1;
    }
    
    if (ls.size() < 1 && ls.size() > 3)
    {
        cout << "Alien";
        return 0;
    }
    
    short a = 0, b = 0;
    
    if (any_of(ls.begin(), ls.end(), [](pair<short, short> a)
    {
        return a.second >= 4;
    }))
    {
        
    }
    else
    {
        cout << "Alien";
        return 0;
    }
    
    for (auto x: ls)
    {
        if (x.second != 4)
        {
            if (a == 0) a = b = x.first;
            else b = x.first;
        }
    }
    
    if (a == b) cout << "Elephant";
    else cout << "Bear";
    
    return 0;
}
