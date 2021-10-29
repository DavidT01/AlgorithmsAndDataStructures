#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> niz(n);
    for (int i = 0; i < n; i++)
        cin >> niz[i];
    int a, b;
    cin >> a >> b;
    int i = 0, j = 0, k = n;
    while (j < k)
    {
        if (niz[j] < a)
            swap(niz[i++], niz[j++]);
        else if (niz[j] <= b)
            j++;
        else
            swap(niz[j], niz[--k]);
    }
    for (int i = 0; i < n; i++)
        cout << niz[i] << " ";
    cout << "\n";
    return 0;
}
