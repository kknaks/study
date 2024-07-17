//https://www.acmicpc.net/problem/2309
//pr.일곱난장이 
//조합으로 풀기 
#include <bits/stdc++.h>
using namespace std;

int a[9], sum;
pair<int,int> ret;

void solve(){
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < i; j++){
            if (sum - a[i] - a[j] == 100){
                ret = {i,j};
                return;
            }
        }
    }
}

int main(){
    for (int i = 0; i < 9; i++){
        cin >> a[i];
        sum += a[i];
    }

    sort(a, a + 9);
    solve();

    for(int i = 0 ; i < 9; i++){
        if(ret.first != i && ret.second != i){
            cout << a[i] <<'\n';
        }
    }
    return 0;
}