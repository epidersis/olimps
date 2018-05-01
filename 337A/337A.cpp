#include <iostream>

using namespace std;


void lin_sort(short *array, short size)
{
	short max;
	
	for (short i = 0; i < size; i++)
	{
		max = i;
		
		for (short j = i; j < size; j++)
		{
			if (array[j] > array[max])
			{
				max = j;
			}
		}
		
		swap(array[i], array[max]);
	}
}


int main()
{
	short n, m, difference = 1000;
	short array[1000];
	
	cin >> n >> m;
	
	for (int i = 0; i < m; i++)
	{
		cin >> array[i];
	}
	
	lin_sort(array, m);
	
	for (int i = 0; i < m-n+1; i++)
	{
		if (array[i] - array[i+n-1] < difference)
		{
			difference = array[i] - array[i+n-1];
		}
	}
	
	cout << difference;
	
	return 0;
}
