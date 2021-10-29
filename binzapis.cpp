#include <iostream>
#include <vector>

using namespace std;

int main()
{
	uint64_t n;
	cin >> n;
	vector<int> binary(32);
	int i = 0;
	while(n)
	{
		binary[i++] = n % 2;
		n /= 2;
	}
	for(i = 31; i >= 0; i--)
		cout << binary[i];
	cout << endl;
	return 0;
}
