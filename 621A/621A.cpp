#include <iostream>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);

    int n, min = 1000000001, number;
    long long int sum = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> number;
        sum += number;
        
        if (number < min && number % 2 != 0) min = number;
    }
    
    if (sum % 2 != 0) sum -= min;
    
    cout << sum;
    
    return 0;
}
