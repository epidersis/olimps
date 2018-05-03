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
        
        if (array[i].length() > 10)
        {
            array[i].replace(1, array[i].length() - 2, to_string(array[i].length() - 2));
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }
    
    
    return 0;
}
