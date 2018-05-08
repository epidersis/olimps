#include <bits/stdc++.h>

using namespace std;


int main()
{
    char num;
    int n, count = 0;
    
    cin >> n;
    
    while(n--)
    {
        cin >> num;

        if (num == '1') count++;
        else count--;
    }
    
    cout << abs(count);

    return 0;
}

