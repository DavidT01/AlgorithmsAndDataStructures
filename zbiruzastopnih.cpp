#include <iostream>

using namespace std;

int main()
{
	uint64_t n;
	cin >> n;
	int k = 0;
	for (uint64_t i = 2; i + i * (i - 1) / 2 <= n; i++)
		if ((n - i * (i - 1) / 2) % i == 0)
			k++;
	cout << k << endl;
	return 0;
}