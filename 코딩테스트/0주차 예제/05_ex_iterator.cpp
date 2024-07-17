#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    for (int i = 0; i <=5; i++) v.push_back(i);
    for (int i = 0; i <=5; i++){
        cout << i <<"번째요소 : " << *(v.begin()+i) <<'\n';
        cout << i <<"번째주소 : " << &*(v.begin()+i) <<'\n';
    }
    cout << '\n';
    for (vector<int>::iterator it = v.begin() ; it !=v.end();it++){
        cout << *it << ' ';
    }
    cout << '\n';
    for (auto it= v.begin() ; it != v.end();it++){
        cout << *it << ' ';
    }
    // cout << '\n';
    // auto it = v.begin();
    // advance(it,3);
    // cout << *it << '\n';

    cout << '\n';
    vector<int>::iterator it = v.begin();
    cout << *it << '\n';

}