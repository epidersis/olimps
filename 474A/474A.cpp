#include <bits/stdc++.h>

using namespace std;


int main()
{
    string layout = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string str;
    char ch;
    short dir = 1;
    
    cin >> ch;
    
    if (ch == 'R') dir = -1;
    
    cin >> str;
    
    for (short i = 0; i < str.size(); i++)
    {
        cout << layout[layout.find(str[i]) + dir];
    }

    return 0;
}

