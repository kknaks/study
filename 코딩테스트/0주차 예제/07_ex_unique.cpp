#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    for (int i = 0; i < 5; i++){
        v.push_back(i);
        v.push_back(i);
    }

    for (int i : v){
        cout << i << ' ';
    }
    cout << '\n';

    v.erase(unique(v.begin(),v.end()),v.end());

    for (int i : v){
        cout << i << ' ';
    }

    return 0;
}