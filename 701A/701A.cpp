#include <iostream>

using namespace std;


int main()
{
    short n;
    cin >> n;
    
    pair<short, short> *a = new pair<short, short>[n];
    
    for (short i = 0; i < n; i++)
    {
        a[i].first = i+1;
        cin >> a[i].second;
    }
    
    for (short i = 0; i < n; i++)
    {
        short min = i;
        
        for (short j = i; j < n; j++)
        {
            if (a[j].second < a[min].second)
            {
                min = j;
            }
        }
        
        swap(a[i], a[min]);
    }
    
    for (short i = 0; i < (n/2); i++)
    {
        cout << a[i].first << " " << a[n-i-1].first << endl;
    }
    

    return 0;
}
