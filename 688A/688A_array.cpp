#include <bits/stdc++.h>
using namespace std;

int main()
{
    short n, d, count = 0, c = 0;
    
    cin >> n >> d;
    
    string a[d];
    
    for ( short i = 0; i < d; i++ )
    {
        cin >> a[i];
    }
    
    for ( short i = 0; i < d; i++ )
    {    
        bool flag = false;    
        for ( int j = 0; j < n; j++ )
        {
            if ( a[i][j] == '0' ) 
            {
                count++;
                flag = true;
                break;
            }
        }
        if ( flag == true && count > c ) c = count;
        else if ( flag == false ) count = 0;
    }
    
    
    cout << c;
}
