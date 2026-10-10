#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; if(!(cin>>n>>m)) return 0;
    int target = n - m;
    vector<double> E(n+1, 0.0);
    for(int k = target+1; k <= n; ++k){
        double sum = 0.0;
        for(int x = 1; x <= k; ++x){
            sum += E[k - x];
        }
        E[k] = 1.0 + sum / k;
    }
    cout.setf(ios::fixed);
    cout << setprecision(2) << E[n] << "\n";
    return 0;
}
