#include <iostream>

using namespace std;

int main()
{
    uint64_t n;
    cin >> n;
    if (n == 1)
    {
        cout << "NE" << endl;
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "NE" << endl;
            return 0;
        }
    }
    cout << "DA" << endl;
    return 0;
}