#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long int> a(n);
    for (int p = 0; p < n; p++)
        cin >> a[p];
    long long k = 0;
    int i = 0;
    while (i < n)
    {
        int j = i + 1;
        while (j < n && a[j] > a[j - 1])
            j++;
        long long m = j - i;
        k += m * (m - 1) / 2;
        i = j;
    }
    cout << k << endl;
    return 0;
}