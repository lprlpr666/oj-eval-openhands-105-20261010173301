#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    if(!(cin >> n >> m)) return 0;
    int target = n - m; // remaining apples when we stop
    vector<double> E(n+1, 0.0);
    // For k <= target, E[k]=0 already.
    for(int k = target+1; k <= n; ++k) {
        double sum = 0.0;
        for(int x = 1; x <= k; ++x) {
            int nk = k - x;
            if(nk < 0) nk = 0; // shouldn't happen
            sum += E[nk];
        }
        E[k] = 1.0 + sum / k;
    }
    cout.setf(ios::fixed);
    cout << setprecision(2) << E[n] << "\n";
    return 0;
}
