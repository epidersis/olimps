#include <bits/stdc++.h>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);

	int n, k, a, candies, qty;
	candies = qty = 0;
	
	cin >> n >> k;
	
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		candies += a;
		
		k -= min(8, candies);
		candies -= min(8, candies);
		
		qty ++;
		
		if (k <= 0) break;
	}
	
	if (k <= 0) cout << qty;
	else cout << -1;

    return 0;
}

