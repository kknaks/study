#include <bits/stdc++.h>
using namespace std;

void print(list<int> a){
    for (auto it : a) cout<< it << ' ';
    cout << '\n';
}

int main(){
    list<int> a;
    for (int i = 1; i <= 3; i++) a.push_back(i);
    for (int i = 1; i <= 3; i++) a.push_front(i);

    auto it = a.begin();
    it++;
    a.insert(it,1000);
    print(a);

    it = a.begin();
    it++;
    a.erase(it);
    print(a);
    
    a.pop_front();
    a.pop_back();
    print(a);

    return 0;
}