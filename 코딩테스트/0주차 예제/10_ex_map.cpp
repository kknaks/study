#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> mp;
    string a[] = {"주홍철", "이승철", "박종선"};
    
    for(int i=0;i<3;i++){
        mp.insert({a[i], i+1});
        mp[a[i]] = i+1;
    }
    cout << mp.size() << '\n';
    cout << mp["kundol"] << '\n';
    cout << mp.size() << '\n';

    return 0;
}