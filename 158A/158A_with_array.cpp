#include <iostream>


int main()
{
	short n, k, last_pos_points;
	std::cin >> n >> k;
	
	short *array = new short[n];
	short count = 0;
	
	
	for (int i = 0; i < n; i++)
	{
		std::cin >> array[i];
	}
	
	last_pos_points = array[k - 1];
	
	for (int i = 0; i < n; i++)
	{
		if (array[i] > 0 && array[i] >= last_pos_points)
		{
			count++;
		}
		else
		{
			break;
		}
	}
	
	std::cout << count;
	
	return 0;
}

