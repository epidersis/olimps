#include <bits/stdc++.h>

using namespace std;


int main()
{
    int d1, d2, d3;
    int opt_d1, opt_d2, opt_d3;
    
    cin >> d1 >> d2 >> d3;
    
    opt_d1 = min(d1, d2+d3);
    opt_d2 = min(d2, d1+d3);
    opt_d3 = min(d3, d1+d2);
    
    cout << min(opt_d1 + opt_d3 + min(opt_d2, d2), 
                opt_d2 + opt_d3 + min(opt_d1, d1));

    return 0;
}
