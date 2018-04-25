#include <iostream>


int main()
{
	short n, a, b, c, count = 0;
	
	std::cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		std::cin >> a >> b >> c;
		
		if (a+b+c >= 2) count++;
	}
	
	std::cout << count;
	
	return 0;
}
