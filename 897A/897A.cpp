#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);

    char c1, c2;
    int n, m, l, r;
    string str;
    
    cin >> n >> m >> str;
    
    for (int i = 0; i < m; i++)
    {
        cin >> l >> r >> c1 >> c2;
        
        replace(str.begin()+l-1, str.begin()+r, c1, c2);
    }
    
    cout << str;

    return 0;
}

