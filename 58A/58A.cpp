#include <bits/stdc++.h>

using namespace std;


int main()
{
    short i = -1;
    
    string str;
    string hello = "hello";
    
    cin >> str;
    
    for (short j = 0; j < 5; j++)
    {
        i = str.find(hello[j], i+1);
        if (i == -1) break;
    }

    if (i == -1) cout << "NO";
    else cout << "YES";

    return 0;
}

