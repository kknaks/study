#include <bits/stdc++.h> 
using namespace std;
int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    cout << &*lower_bound(v.begin(),v.end(),3) -  &*v.begin() << '\n';
    cout << (lower_bound(v.begin(),v.end(),3) - v.begin())<<'\n';
    
    vector<int> v2 = {1,2,3,4,5,6,7,8,9};
    for (int it : v2) cout << it << '\n';

}
