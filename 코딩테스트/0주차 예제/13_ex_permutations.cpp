#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout << '\n';
}

int main(){
    int a[3] = {1,2,3};
    vector<int> v; 
    for (int i = 0; i< 3; i++) v.push_back(a[i]);
    print(v);
    cout << "-----------" << '\n';

    do{
        print(v);
    }while(next_permutation(v.begin(),v.end()));
    cout << "-----------" << '\n';

    reverse(v.begin(), v.end());

    do{
        print(v);
    }
    while(prev_permutation(v.begin(),v.end()));
    return 0;
}