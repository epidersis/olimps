#include <iostream>


int main()
{
	short n, x = 0;
	char op[3];
	
	std::cin >> n;
	
	for (short i = 0; i < n; i++)
	{
		std::cin >> op;
		
		if (op[1] == '+') x++;
		else x--;
	}
	
	std::cout << x;
	
	return 0;
}
