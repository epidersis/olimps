#include <bits/stdc++.h>

using namespace std;


int main()
{
    short n;
    short h_nums[] = {4, 7, 47, 74, 447, 474, 477, 774, 747};
    
    cin >> n;

    for (short x: h_nums)
    {
        if (n % x == 0)
        {
            cout << "YES";
            return 0;
        }
    }
    
    cout << "NO";
    return 0;
}

