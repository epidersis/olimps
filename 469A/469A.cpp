#include <bits/stdc++.h>

using namespace std;


void input(set<int> &a, int p)
{
    int num;
    
    for (int i = 0; i < p; i++)
    {
        cin >> num;
        if (num == 0) continue;
        
        a.insert(num);
    }
}


int main()
{
    int n, p;
    set<int> levels;
    
    cin >> n >> p;
    input(levels, p);
    
    cin >> p;
    input(levels, p);

    if (levels.size() == n) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";

    return 0;
}

