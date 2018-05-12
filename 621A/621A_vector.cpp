#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    long long int sum = 0, min = 1000000001;
    cin >> n;
    
    vector<long long int> a(n);
    
    for ( int i = 0; i < n; i++ )
    {
        cin >> a[i];
        
        if (a[i] % 2 != 0 && min > a[i]) 
        {
            min = a[i];
        }
    }
    
    sum = accumulate(a.begin(), a.end(), sum);
    if ( sum %2 != 0 ) sum -= min;
    
    cout << sum;
    
    return 0;
}    
    
