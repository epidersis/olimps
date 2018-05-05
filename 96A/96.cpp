#include <bits/stdc++.h>

using namespace std;


int main()
{
    char ch = '0';
    char str[101];
    short count = 0;
    
    cin >> str;
    
    for (short i = 0; i < strlen(str); i++)
    {
        if (str[i] != ch)
        {
            count = 0;
            ch = str[i];
        }
        
        count++;
        
        if (count >= 7)
        {
            cout << "YES";
            return 0;
        }
    }
    
    cout << "NO";
    return 0;
}

