#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> niz(n);
	for(int i = 0; i < n; i++)
		cin >> niz[i];
	int zbir = 0;
	for(int i = 0; i < n; i++)
	{
		if(niz[i] > zbir + 1)
			break;
		zbir += niz[i];
	}
	cout << zbir + 1 << endl;
	return 0;
}
