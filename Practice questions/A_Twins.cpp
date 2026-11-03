#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int total = 0;
    int coins[n];

    for(int i = 0; i < n; i++) {
        cin >> coins[i];
        total += coins[i];
    }
    sort(coins, coins+n, greater<int>());
    int collected = 0;
    int count = 0;

    for(int k = 0; k<n; k++) {
        collected += coins[k];
        count++;

        if(collected > total - collected) {
            break;
        }
    }

    cout << count;

    return 0;
}