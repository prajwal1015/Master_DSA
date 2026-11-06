
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int x[100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (x[i] > x[j]) {
                swap(x[i], x[j]);
            }

        }
    }

    for (int i = 0; i < n; i++) {
        cout << x[i] <<" ";
    }

    return 0;
}
