#include <bits/stdc++.h>

using namespace std;


int main()
{
    short n, temp, max = 0;
    cin >> n;
    
    bool *arr = new bool[n];

    for (short i = 0; i < n; i++) cin >> arr[i];

    for (short k = 0; k < n; k++)
    {
        for (short i = 0; i < n - k; i++)
        {
            for (short j = i; j < n - k; j++) arr[j] = !arr[j];
            
            temp = count(arr, arr+n, 1);
            
            if (temp > max) max = temp;
            
            for (short j = i; j < n - k; j++) arr[j] = !arr[j];
        }
    }

    cout << max;

    return 0;
}

