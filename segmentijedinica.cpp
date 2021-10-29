#include <iostream>
#include <string>

using namespace std;

int main()
{
	string niska;
	cin >> niska;
	int i = 0, k = 0;
	while(niska[i])
		if(niska[i++] == '1')
			k++;
	int rez = k * (k - 1) / 2;
	cout << rez << endl;
	return 0;
}
