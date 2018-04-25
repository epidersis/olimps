#include <iostream>

int main()
{
	
	char rocks[50];
	char last_char;
	
	short n;
	short count = 0;
	
	std::cin >> n >> rocks;
	last_char = rocks[0];
	
	for (short i = 1; i < n; i++)
	{
		if (rocks[i] == last_char)
		{
			count++;
		} else {
			last_char = rocks[i];
		}
	}
	
	std::cout << count;
}
