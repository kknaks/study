#include <bits/stdc++.h>
using namespace std;

int n, a[101];

bool prime(int n){
    if (n <=1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; i*i <= n; i++){
        if (n % i == 0) return 0;
    }
    return 1;
}

int go(int idx, int sum){
    if (idx == n) return prime(sum);
    return go(idx + 1, sum + a[idx]) + go(idx + 1, sum);
}

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    cout << go(0,0) << '\n';
    return 0;
}
