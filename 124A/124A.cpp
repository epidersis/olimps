#include <iostream>

using namespace std;


int main()
{
    short n, a, b, p;
    
    cin >> n >> a >> b;
    
    p = n - a;
    p = p > b ? b+1:p;
    
    cout << p;
    
    return 0;
}
