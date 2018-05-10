#include <bits/stdc++.h>
using namespace std;

int main()
{
    short n, num; 
    float sum = 0;
    cin >> n;
    
    for ( short i = 0; i < n; i++ )
    {
        cin >> num;
        sum += num;
    }
    
    cout << sum / n;
}
