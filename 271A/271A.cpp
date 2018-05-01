#include <iostream>
#include <cstring>

int main()
{
	bool founded = true;
	short y;
	std::string s;
	
	std::cin >> y;
	
	for (short i = y + 1; ; i++)
	{
		s = std::to_string(i);
		
		for (short j = 0; j < 4; j++)
		{
			for (short q = j + 1; q < 4; q++)
			{
				if (s[j] == s[q])
				{
					founded = false;
				}
			}
		}
		
		if (founded)
		{
			std::cout << s;
			break;
		}
		
		founded = true;
	}
}
