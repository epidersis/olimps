#include <iostream>
#include <cmath>

int main()
{
	bool founded = false;
	short x , y;
	x = y = 0;
	
	char ch;
	
	for (short i = 0; i < 45; i++)
	{
		std::cin >> ch;
		
		if (ch == '1')
		{
			y = i / 5;
			x = i % 5;
			break;
		}
	}
	
	std::cout << abs(2 - x) + abs(2 - y);
	
}
