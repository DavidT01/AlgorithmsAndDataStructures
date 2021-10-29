#include <iostream>

using namespace std;

int main()
{
	uint64_t broj = 0;
	int cifra, i = 0;
	while(i < 9 && scanf("%d", &cifra) != EOF)
	{	
		broj = broj * 10 + cifra;
		i++;
	}
	cout << broj << endl;
	return 0;
}
