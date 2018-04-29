#include <iostream>

using namespace std;


int main()
{
	char f;
	short weight = 0, side;
	
	for (short i = 0; i < 64; i++)
	{
		cin >> f;
		
		if (f == '.') continue;
		
		if (f <= 90)
		{
			side = 1;
			f += 32;
		}
		else side = -1;
		
		if (f == 'q') weight += 9*side;
		else if (f == 'r') weight += 5*side;
		else if (f == 'b' || f == 'n') weight += 3*side;
		else if (f == 'p') weight += side;
	}
	
	if (weight > 0) cout << "White";
	else if (weight < 0) cout << "Black";
	else cout << "Draw";
	
	return 0;
}
