#include <iostream>


int main()
{
	unsigned long int n, m, a;
	unsigned long long int width, height;
	
	std::cin >> n >> m >> a;
	
	if (n % a != 0) width = n / a + 1;
	else width = n / a;
	
	if (m % a != 0) height = m / a + 1;
	else height = m / a;
	
	std::cout << width * height;
	
	return 0;
}
