#include <bits/stdc++.h>

using namespace std;


int main()
{
    short l;
    list<short> ls;
    
    for (short i = 0; i < 6; i++)
    {
        cin >> l;
        ls.push_back(l);
    }
    
    ls.sort();
    
    auto it = ls.begin();
    advance(it, 2);
    
    if (count(ls.begin(), ls.end(), *it) < 4)
    {
        cout << "Alien";
    }
    else
    {
        ls.remove(*it);
        
        if (ls.size() == 0) cout << "Elephant";
        else if (ls.size() == 1) cout << "Bear";
        else if (*ls.begin() == *ls.rbegin()) cout << "Elephant";
        else cout << "Bear";
    }
    
    return 0;
}
