#include <bits/stdc++.h>

using namespace std;


int main()
{
    short a, b;
    int n, count = 0, sum = 0;
    
    cin >> n >> a >> b;
    short *s = new short[n];
    
    for (int i = 0; i < n; i++) 
    {
        cin >> s[i];
        sum += s[i];
    }
    
    sort(s+1, s+n);
    
    while(true)
    {
        if (s[0]*a/sum >= b)
        {
            break;
        }
        
        n--;
        sum -= s[n];
        count++;
    }
    
    cout << count;
    
    return 0;
}
