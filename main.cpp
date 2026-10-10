// solution for problem 105
#include <cstdio>
#include <cstring>
int main(){
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;
    int target = n - m; // remaining apples when stop
    double E[21]; // n <= 20
    memset(E, 0, sizeof(E));
    for (int k = target + 1; k <= n; ++k) {
        double sum = 0.0;
        for (int x = 1; x <= k; ++x) {
            sum += E[k - x];
        }
        E[k] = 1.0 + sum / k;
    }
    printf("%.2f\n", E[n]);
    return 0;
}
