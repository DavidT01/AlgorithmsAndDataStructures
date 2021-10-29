#include <iostream>
#include <vector>

using namespace std;

int main()
{
	uint64_t n;
	cin >> n;
	vector<int> bin(32);
	int i = 0;
	while(n)
	{
		bin[i++] = n % 2;
		n /= 2;
	}
	for(i = 31; i >= 0; i--)
		cout << bin[i];
	cout << endl;
	return 0;
}
