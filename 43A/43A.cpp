#include <bits/stdc++.h>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);

	int n, x = 0, y = 0;
	string ft, st, t;

	cin >> n >> ft;
	x++;
	
	for (int i = 0; i < n-1; i++)
	{
		cin >> t;
		
		if (t != ft) st = t;
		
		if (t == ft) x++;
		else y++;
	}
	
	if (x > y) cout << ft;
	else cout << st;

    return 0;
}

