#include <bits/stdc++.h>

using namespace std;


int main()
{
    short n;
    int max, sum = 0;
    cin >> n;
    
    int *nums = new int[n];
    
    for (short i = 0; i < n; i++) cin >> nums[i];
    
    max = *max_element(nums, nums+n);

    for (short i = 0; i < n; i++) sum += max - nums[i];
    
    cout << sum;
    
    return 0;
}
