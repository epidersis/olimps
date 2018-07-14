#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);

    int n;
    long long int t, sum;
    
    cin >> n;
    
    for (int j = 0; j < n; j++)
    {
        cin >> t;
        
        sum = t * (1 + t) / 2;

        for (int i = 0; ; i++)
        {
            if (pow(2, i) <= t)
            {
                sum -= 2 * pow(2, i);
            }
            else
            {
                break;
            }
        }
    
        cout << sum << endl;
    }

    return 0;
}

