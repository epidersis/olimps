#include <iostream>

using namespace std;


int main()
{
	int n;
	cin >> n;
	
	if (n <= 3)
	{
		cout << "NO";
	} 
	else if ((n - 2) % 2 == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	
	return 0;
}

