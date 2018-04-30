#include <iostream>

using namespace std;


int main()
{
	int n, num;
	long int all_errors = 0, result = 0;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) 
	{
		cin >> num;
		all_errors += num;
	}
	
	for (int i = 0; i < n - 1; i++) 
	{
		cin >> num;
		result += num;
	}
	
	result = all_errors - result;
	cout << result << endl;
	
	for (int i = 0; i < n - 2; i++) 
	{
		cin >> num;
		result += num;
	}
	
	cout << all_errors - result;
	
	return 0;
}
