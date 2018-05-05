#include <bits/stdc++.h>

using namespace std;


int main()
{
    short n, a, b, count = 0;
    
    cin >> n;
    
    for (short i = 0; i < n; i++)
    {
        cin >> a >> b;
        
        if (a > b) count += 1;
        else if (a < b) count -= 1;
    }
    
    if (count > 0) cout << "Mishka";
    else if (count < 0) cout << "Chris";
    else cout << "Friendship is magic!^^";

    return 0;
}

