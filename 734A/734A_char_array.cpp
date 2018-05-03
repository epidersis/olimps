#include <iostream>

using namespace std;

int main()
{
    int n, count1 = 0, count2 = 0;
    
    cin >> n;
    
    char *a = new char[n+1];
    
    cin >> a;
    
    for ( int i = 0; i < n; i++ )
    {
        if ( a[i] == 'A' ) count1++;
        else count2++;		
    }
    
    if ( count1 == count2 ) cout << "Friendship";
    else if ( count1 < count2 ) cout << "Danik";
    else cout << "Anton";
    
    
}
