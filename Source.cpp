#include <stdlib.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float n, m;
	float A;
	do {
		cout << "Input int n" << endl;
		cin >> n;
		cout << "Input int m" << endl;
		cin >> m;
		if (n < m || m < 0) {
			cout << "Plese input n=>m,m>0" << endl;
		}
	} while (n < m || m < 0||int(m)!=m||int(n)!=n);
	A = n * (n - 1) * (n - m + 1);
	cout << "A=" << A;
	return 0;
}