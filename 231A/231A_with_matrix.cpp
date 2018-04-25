#include <iostream>

int main()
{
	short n, count1 = 0, count2 = 0;
	
	std :: cin >> n;
	
	int a[n][3];
	
	for ( int i = 0; i < n; i++ )
	{
		for ( int j = 0; j < 3; j++ )
		{
			std :: cin >> a[i][j];
		}
	}
	
	
	for ( int i = 0; i < n; i++ )
	{
		for ( int j = 0; j < 3; j++ )
		{
			if ( a[i][j] == 1 ) count1++;
		}
			if ( count1 > 1 ) 
			{
				count2++;
				count1 = 0;
			}
		count1 = 0;
	}
	
	
	std :: cout << count2;
	
	
	
	
}
