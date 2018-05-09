#include <bits/stdc++.h>

using namespace std;


int main()
{
	short n, m, count = 0;
	
	cin >> n;
	vector<short> male(n);
	
	for (int i = 0; i < n ; i++) cin >> male[i];
	
	cin >> m;
	vector<short> female(m);

	for (int j = 0; j < m ; j++) cin >> female[j];
	
	// opt by MikeMirzayanov
	sort(male.begin(), male.end());
	sort(female.begin(), female.end());
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (abs(male[i] - female[j]) <= 1)
			{
				female[j] = 101;
				count++;
				break;
			}	
		}
	}
	
	cout << count;

    return 0;
}

