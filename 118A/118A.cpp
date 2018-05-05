#include <bits/stdc++.h>

using namespace std;


int main()
{
    char ch;
    string str;
    string vowels = "aoyeui";
    cin >> str;
    
    for (short i = 0; i < str.size(); i++)
    {
        ch = tolower(str[i]);
        
        if (vowels.find(ch) != string::npos);
        else
        {
            cout << '.' << ch;
        }
    }
    
    return 0;
}
