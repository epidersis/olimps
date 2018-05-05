#include <bits/stdc++.h>

using namespace std;


int main()
{
    short n, count = 0;
    cin >> n;
    
    short *arr = new short[n];

    for (short i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr, arr+n);
    
    for (short i = n-1; i >= 0; i--)
    {
        count++;
        if (accumulate(arr, arr+i, 0) < accumulate(arr+i, arr+n, 0)) break;
    }

    cout << count;

    return 0;
}

