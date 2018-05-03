#include <bits/stdc++.h>


int main()
{
    double n, m, a;
    
    std::cin >> n >> m >> a;
    std::cout << (long long int)(ceil(n/a) * ceil(m/a));
    
    return 0;
}
