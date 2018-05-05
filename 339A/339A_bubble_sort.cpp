#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[100];
    
    cin >> s;    
    
    for ( int j = 0; j < strlen(s) - 1; j++)
    {                
        for ( int i = 0; i < strlen(s) - 2; i = i+2 )
        {    
            if ( s[i] > s[i+2] ) 
            {
                int temp;
                temp = s[i];
                s[i] = s[i+2];
                s[i+2] = temp;
            }        
        }
    }
    cout << s;
}
