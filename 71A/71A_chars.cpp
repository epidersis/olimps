#include <iostream>
#include <cstring>

using namespace std;


int main()
{
	int n ;
	cin >> n;
	
	char array[n][101];
	
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	
	for (int i = 0; i < n; i++)
	{		
		if (strlen(array[i]) > 10)
		{
			cout << array[i][0];
			cout << strlen(array[i]) - 2;
			cout << array[i][strlen(array[i])-1] << endl;
			continue;
		}
		
		cout << array[i] << endl;
	}
	
	
	return 0;
}
