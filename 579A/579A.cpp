#include <bits/stdc++.h>

using namespace std;


int main()
{
    int num, count = 0;;
    cin >> num;

    while(num)
    {
        if (num % 2 == 1) count++;
        num /= 2;
        
    }
    
    cout << count;

    return 0;
}

