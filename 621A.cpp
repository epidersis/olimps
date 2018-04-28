#include <iostream>

using namespace std;


int main()
{
	int n, min, number;
	long long int sum = 0;
	
	cin >> n >> min;
	sum += min;
	
	for (int i = 0; i < n - 1; i++)
	{
		cin >> number;
		sum += number;
		
		if (number < min && number % 2 != 0) min = number;
	}
	
	if (sum % 2 != 0) sum -= min;
	
	cout << sum;
	
	return 0;
}
