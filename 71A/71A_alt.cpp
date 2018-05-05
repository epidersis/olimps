#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    int n ;
    cin >> n;
    
    string *array = new string[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    for (int i = 0; i < n; i++)
    {        
        if (array[i].length() > 10)
        {
            cout << array[i][0];
            cout << array[i].length() - 2;
            cout << array[i][array[i].length()-1] << endl;
            continue;
        }
        
        cout << array[i] << endl;
    }
    
    
    return 0;
}
