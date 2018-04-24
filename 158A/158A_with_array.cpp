#include <iostream>

using namespace std;


int main()
{
	short n, k;
	cin >> n >> k;
	
	short *array = new short[n];
	short count = 0;
	
	
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	
	for (int i = 0; i < n; i++)
	{
		if (array[i] > 0 && (k > 0 || array[i - 1] == array[i]))
		{
			count++;
			k--;
		}
		else
		{
			break;
		}
	}
	
	cout << count;
	
	return 0;
}

