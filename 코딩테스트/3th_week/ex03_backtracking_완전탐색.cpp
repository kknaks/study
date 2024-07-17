#include <bits/stdc++.h>
using namespace std;

int n, a[101],mx,cnt;

void go(int idx, int sum){
    if (mx == 10) return ;
    if (idx == n){
        cnt++;
        mx = max(mx,sum % 11);
        return;
    }
    
    go(idx + 1, sum + a[idx]);
    go(idx + 1, sum);
}

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    go(0,0);
    cout << mx << '\n';
    cout << cnt << '\n';
    return 0;
}