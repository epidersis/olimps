#include <iostream>
#include <cstring>

int main()
{
	short ones, twos, threes;
	ones = twos = threes = 0;
	
	char exp[101];
	char new_exp[101];
	new_exp[0] = '\0';
	
	std::cin >> exp;
	
	for (short i = 0; i < strlen(exp); i += 2)
	{
		if (exp[i] == '3') threes++;
		else if (exp[i] == '2') twos++;
		else ones++;
	}
	
	for (short i = 0; i < ones; i++)
	{
		strcat(new_exp, "1+");
	}
	
	for (short i = 0; i < twos; i++)
	{
		strcat(new_exp, "2+");
	}
	
	for (short i = 0; i < threes; i++)
	{
		strcat(new_exp, "3+");
	}
	
	new_exp[strlen(new_exp) - 1] = '\0';
	
	std::cout << new_exp;
	
	return 0;
}
