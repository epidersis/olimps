#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    char s[100];
    cin >> s;	
    
    for (short j = 0; j < strlen(s); j += 2)
    {
        short min = j;
        
        for (short i = j; i < strlen(s); i += 2)
        {	
            if (s[min] > s[i])
            {
                min = i;
            }		
        }
        
        swap(s[min], s[j]);
    }
    cout << s;
}
