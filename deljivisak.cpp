#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<uint64_t> niz(n);
    for (int i = 0; i < n; i++)
        cin >> niz[i];
    int k;
    vector<int> rez;
    while (scanf("%ull", &k) != EOF)
    {
        int i = 0, j = n - 1;
        while (i <= j)
        {
            int s = i + (j - i) / 2;
            if (niz[s] % k == 0)
                i = s + 1;
            else
                j = s - 1;
        }
        rez.push_back(j + 1);
    }
    int q = rez.size();
    for (int i = 0; i < q; i++)
        cout << rez[i] << endl;
    return 0;
}
