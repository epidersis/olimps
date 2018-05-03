#include <iostream>

using namespace std;


int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int toast = k*l / (n * nl);
    toast = c*d/n < toast ?  c*d/n: toast;
    toast = p/(n*np) < toast ? p/(n*np):toast;

    cout << toast;

    return 0;
}
