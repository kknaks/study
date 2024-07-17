#include <bits/stdc++.h>
using namespace std;

int n, cnt;

int main(){
    cin >> n;
    for (int i = 2400; i < 100000; i++){
        string a = to_string(i);
        if (a.find("2400") != string::npos){
            cnt++;
            if (cnt == n) cout << a <<'\n';
        }
    }
    return 0;
}
