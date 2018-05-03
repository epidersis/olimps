#include <iostream>

using namespace std;


int main()
{
    short n, k;
    short current, last;
    short count = 0;
    
    cin >> n >> k;
    
    for (int i = 0; i < n; i++)
    {
        cin >> current;
        
        if (current > 0 && (k > 0 || current == last))
        {
            last = current;
            count++;
            k--;
        }
        else
        {
            break;
        }
    }
    
    cout << count;
    
    return 0;
}
