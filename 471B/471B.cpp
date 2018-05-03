#include <bits/stdc++.h>

using namespace std;


int main()
{
    short n, el, size = 0;
    cin >> n;
    
    vector< pair<short,short> > indices;
    vector< pair<short,short> > d;
    
    for (short i = 0; i < n; i++)
    {
        cin >> el;
        d.push_back(make_pair(i, el));
    }
    
    sort(d.begin(), d.end(), [](pair<short, short> a, pair<short, short> b)
    {
        return a.second < b.second;
    });
    
    for (short i = 0; i < n; i++)
    {
        for (short j = i+1; j < n; j++)
        {
            if (d[i].second == d[j].second)
            {
                indices.push_back(make_pair(i, j));
                if (indices.size() >= 2) break;
            }
        }
        
        if (indices.size() >= 2) break;
    }
    
    if (indices.size() >= 2)
    {
        cout << "YES" << endl;
        
        for (short i = 0; i < n; i++) cout << d[i].first+1 << " ";
        cout << endl;
        
        for (short i = 0; i < 2; i++)
        {
            swap(d[indices[i].first], d[indices[i].second]);
            
            for (short j = 0; j < n; j++) cout << d[j].first+1 << " ";
            cout << endl;
        }
    }
    else
    {
        cout << "NO";
    }
    
    return 0;
}
