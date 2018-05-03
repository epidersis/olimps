#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    char a[101], b[101];
    
    cin >> a >> b;
    
    if (stricmp(a, b) > 0) cout << "1";
    else if (stricmp(a, b) < 0) cout << "-1";
    else cout << "0";
    
    return 0;
}
