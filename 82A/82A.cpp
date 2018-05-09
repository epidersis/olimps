#include <bits/stdc++.h>

using namespace std;


int main()
{
    short i = 0;
    int c, cur_c = 0;
    int p[] = {1, 1, 1, 1, 1};
    string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    
    cin >> c;
    
    for(;;)
    {
        cur_c += p[i];
        
        if (cur_c >= c) break;
        
        p[i] *= 2;
        i++;
        
        if (i >= 5) i = 0;
    }
    
    cout << names[i];

    return 0;
}

