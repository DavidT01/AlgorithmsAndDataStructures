#include <iostream>
#include <vector>

using namespace std;

void eratostenovoSito(vector<bool>& prost, int n) 
{
    prost.resize(n + 1, true);
    prost[0] = prost[1] = false;
    for (int i = 2; i * i <= n; i++)
        if (prost[i]) {
            for (int j = i * i; j <= n; j += i)
                prost[j] = false;
        }
}

int main() {
    int a, b;
    cin >> a >> b;
    vector<bool> prost;
    eratostenovoSito(prost, b);
    int zbir = 0, k = 0;
    for (int i = a; i <= b; i++)
        if (prost[i]) {
            zbir = (zbir + i) % 1000000;
            k++;
        }
    cout << k << " " << zbir << endl;
    return 0;
}
