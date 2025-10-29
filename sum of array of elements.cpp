#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    vector<int> a(n); // dynamic array using vector

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }

    cout << sum;
    return 0;
}

