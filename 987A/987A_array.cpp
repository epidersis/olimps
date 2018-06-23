#include <bits/stdc++.h>

using namespace std;

int main()
{
    short n, a1(0), a2(0), a3(0), a4(0), a5(0), a6(0), count(0);
    
    cin >> n;
    
    string a[n];
    
    for ( short i = 0; i < n; i++ )
    {
        cin >> a[i];
    }
    
    for ( short i = 0; i < n; i++ )
    {
        if ( a[i] == "purple" ) { a1++; count++; }
        if ( a[i] == "green" ) { a2++; count++; }
        if ( a[i] == "blue" ) { a3++; count++; }
        if ( a[i] == "orange" ) { a4++; count++; }
        if ( a[i] == "red" ) { a5++; count++; }
        if ( a[i] == "yellow" ) { a6++; count++; } 
    }
    
    cout << 6 - count << endl;
    
    if ( a1 == 0 ) cout << "Power\n";
    if ( a2 == 0 ) cout << "Time\n";
    if ( a3 == 0 ) cout << "Space\n";
    if ( a4 == 0 ) cout << "Soul\n";
    if ( a5 == 0 ) cout << "Reality\n";
    if ( a6 == 0 ) cout << "Mind\n";    
}
