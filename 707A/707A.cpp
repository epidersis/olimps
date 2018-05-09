#include <bits/stdc++.h>

using namespace std;


int main()
{
    short n, m;
    char ch;
    
    cin >> n >> m;
    
    for (short i = 0; i < n*m; i++)
    {
        cin >> ch;
        
        if (ch == 'C' || ch == 'M' || ch == 'Y')
        {
            cout << "#Color";
            return 0;
        }
    }
    
    cout << "#Black&White";
    return 0;
}
