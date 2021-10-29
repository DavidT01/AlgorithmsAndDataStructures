#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int maks = 0;
	for (int i = 0; i < n; i++)
	{
		int zbir = 0;
		int j;
		for (j = i; j < n; j++)
		{
			zbir += a[j];
			if (zbir < 0)
				break;
			if (zbir > maks)
				maks = zbir;
		}
		i = j;
	}
	cout << maks << endl;
	return 0;
}