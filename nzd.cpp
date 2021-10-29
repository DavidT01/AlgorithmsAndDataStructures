#include <iostream>

using namespace std;

int nzd(int a, int b) 
{
	while (b > 0) 
	{
		int tmp = b;
		b = a % b;
		a = tmp;
	}
	return a;
}

int main() 
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << nzd(nzd(a, b), c) << endl;
	return 0;
}
