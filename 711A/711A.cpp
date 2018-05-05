#include <bits/stdc++.h>

using namespace std;


int main()
{
    short n, k, p = -1;
    cin >> n;
    
    string *rows = new string[n];
    
    for (short i = 0; i < n; i++)
    {
        cin >> rows[i];
        
        if (rows[i].find("OO") != -1)
        {
            p = rows[i].find("OO");
            k = i;
        }
    }
    
    if (p != -1) cout << "YES" << endl;
    else {
        cout << "NO";
        return 0;
    }
    
    for (short i = 0; i < n; i++)
    {        
        if (i != k)
        {
            cout << rows[i] << endl;;
        }
        else
        {
            rows[i].replace(p, 2, "++");
            cout << rows[i] << endl;
        }
    }
    return 0;
}

