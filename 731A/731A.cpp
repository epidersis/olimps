#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    char ch = 'a', temp;
    short steps = 0, left = 0, right = 0;
    char s[101];
    
    cin >> s;
    
    for (short i = 0; i < strlen(s); i++)
    {    
        temp = ch;
        
        while(true)
        {
            if (ch == s[i]) break;
            
            ch += 1;
            if (ch > 122) ch = 97;
            
            right++;
        }
        
        ch = temp;
        
        while(true)
        {
            if (ch == s[i]) break;
            
            ch -= 1;
            if (ch < 97) ch = 122;
            
            left++;
        }
        
        if (right > left) steps += left;
        else steps += right;
        
        right = left = 0;
    }
    
    cout << steps;
    
    return 0;
}
