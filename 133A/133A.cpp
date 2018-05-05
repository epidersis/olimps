#include <bits/stdc++.h>

using namespace std;


int main()
{
    string str;
    cin >> str;
    
    if (str.find_first_of("HQ9") != -1) cout << "YES";
    else cout << "NO";

    return 0;
}

