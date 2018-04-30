#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int n;
	cin >> n;
	
	int a[n], b[n-1], c[n-2], xa = 0, xb = 0, xc = 0;
	
	for ( int i = 0; i < n; i++ )
	{
		cin >> a[i];
		xa += a[i];
	}
	
	for ( int i = 0; i < n-1; i++ )
	{
		cin >> b[i];
		xb += b[i];
	}
	
	for ( int i = 0; i < n-2; i++ )
	{
		cin >> c[i];
		xc += c[i];
	}
	cout << xa - xb << endl << xb - xc;
}
	
	
	
	
