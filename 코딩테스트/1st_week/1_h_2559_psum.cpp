#include <bits/stdc++.h>
using namespace std;

int psum[100004], t, n, k, max_t = -100000004;

int main(){
    cin >> n >> k;
    for (int i = 1; i < n; i++){
        cin >> t;
        psum[i] = t + psum[i-1];
    }

    for (int i = k; i < n; i++){
        max_t = max(max_t, psum[i] - psum[i-k]);
    }
    cout << max_t;
    return 0;
}