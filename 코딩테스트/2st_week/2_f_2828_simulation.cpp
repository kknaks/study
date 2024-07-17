#include <bits/stdc++.h>
using namespace std;

int n,m,j,l,r,temp,ret;

int main(){
    cin >> n >> m >> j;
    l = 1;
    for (int i = 0; i < j; i++){
        cin >> temp;
        r = l + m - 1;
        if (temp >= l && temp <= r) continue;
        else {
            if (temp > r){
                ret += temp - r;
                l = temp - r;
            }
            else {
                ret += l - temp;
                l = temp;
            }
        }
    }
}