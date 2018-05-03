#include <iostream>

using namespace std;


int main()
{
    char ch;
    int n;
    int count = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        if (ch == 'A') count++;
        else count--;
    }
    
    if (count > 0) cout << "Anton";
    else if (count < 0) cout << "Danik";
    else cout << "Friendship";
    
    return 0;
}
