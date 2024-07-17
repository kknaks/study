#include <bits/stdc++.h>
using namespace std;

int a[1000004],ret[1000004],n;
stack<int> stk;

int main(){
    memset(ret,-1,sizeof(ret));
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        while (stk.size() && a[stk.top()] < a[i]){
            ret[stk.top()] = a[i];
            stk.pop();
        }
        stk.push(i);
    }

    for (int i = 0; i < n; i++){
        cout << ret[i] << " ";
    }
    return 0;
}