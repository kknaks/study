#include <bits/stdc++.h>
using namespace std;

int t,n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> t;
    for (int i = 0; i < t; i++){
        int ret2 = 0, ret5 =0; 
        cin >> n;
        for (int j = 2; j <= n; j*=2) ret2 += n/j;
        for (int k = 5; k <= n; k*=5) ret5 += n/k;
        cout << min(ret2,ret5) <<'\n';
    }
}
