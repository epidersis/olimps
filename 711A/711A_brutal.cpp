#include <bits/stdc++.h>

using namespace std;

int main()
{
    short n, pos1 = 0, pos2 = 0;
    cin >> n;
    
    string s[n];
    
    bool flag = false;
    
    for ( int i = 0; i < n; i++ )
    {
        cin >> s[i];
        
        if (  s[i][0] == 'O' && s[i][1] == 'O' ) 
        {
            pos1 = i;
            flag = true;
        }
        else if ( s[i][3] == 'O' && s[i][4] == 'O')
        {
            pos2 = i;
            flag = true;
        }
    }
    
    if ( pos1 >= pos2 ) 
    {
        s[pos1][0] = '+';
        s[pos1][1] = '+';
    }
    
    else {
        s[pos2][3] = '+';
        s[pos2][4] = '+';
    }
    
    if ( flag == true )
    {
        cout << "YES" << endl;
        for ( short i = 0; i < n; i++ )
        {
            cout << s[i] << endl;
        }
    }

    else cout << "NO";    
}
