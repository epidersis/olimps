#include <bits/stdc++.h>

using namespace std;


int main()
{
	short n, m, count = 0;
	short i = 0, j = 0;
	
	cin >> n;
	short *male = new short[n];
	
	for (i; i < n ; i++) cin >> male[i];
	
	cin >> m;
	short *female = new short[m];

	for (j; j < m ; j++) cin >> female[j];
	
	sort(male, male+n);
	sort(female, female+m);
	
	i = j = 0;
	int c = 0;
	if (male[0] > female[0])
	{
		for (i; i < n; i++)
		{
			for(j; j < m; j++)
			{
				if (abs(male[i] - female[j]) <= 1)
				{
					c = j+1;
					count++;
					j++;
					break;
				}
			}
			
			if (j == m) j = c;
		}
	}
	else
	{
		for (j; j < m; j++)
		{
			for(i; i < n; i++)
			{
				if (abs(female[j] - male[i]) <= 1)
				{
					c = i+1;
					count++;
					i++;
					break;
				}
			}
			
			if (i == n) i = c;
		}
	}
	
	cout << count;

    return 0;
}

