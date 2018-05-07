#include <bits/stdc++.h>

using namespace std;


int main() {

    char k[101];
    cin >> k;

    set<char>mySet(k, k+strlen(k));
    
    if ( mySet.size() % 2 == 0 ) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    
    return 0;
}
