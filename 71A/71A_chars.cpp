#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    int n ;
    cin >> n;
    
    char string[101];
    
    for (int i = 0; i < n; i++)
    {	
        cin >> string;
        
        if (strlen(string) > 10)
        {
            cout << string[0];
            cout << strlen(string) - 2;
            cout << string[strlen(string)-1] << endl;
            continue;
        }
        
        cout << string << endl;
    }
    
    
    return 0;
}
