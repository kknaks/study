#include <bits/stdc++.h>
using namespace std;


void rotate_unclock(){
    vector<int> v = {1,2,3,4,5,6};
    for (int i : v)  cout<< i << ' ';
    cout << '\n';

    vector<int> v1 = {1,2,3,4,5,6};
    rotate(v1.begin(),v1.begin()+1,v1.end());
    for (int i : v1) cout<< i << ' ';
    cout << '\n';
    
    vector<int> v2 = {1,2,3,4,5,6};
    rotate(v2.begin(),v2.begin()+2,v2.end());
    for (int i : v2) cout<< i << ' ';
    cout << '\n';

    vector<int> v3 = {1,2,3,4,5,6};
    rotate(v3.begin()+1,v3.begin()+2,v3.begin()+5);
    for (int i : v3) cout<< i << ' ';
    cout << '\n';
}
void rotate_clock(){
    vector<int> v = {1,2,3,4,5,6};
    for (int i : v)  cout<< i << ' ';
    cout << '\n';

    vector<int> v1 = {1,2,3,4,5,6};
    rotate(v1.rbegin(),v1.rbegin()+1,v1.rend());
    for (int i : v1) cout<< i << ' ';
    cout << '\n';
    
    vector<int> v2 = {1,2,3,4,5,6};
    rotate(v2.rbegin(),v2.rbegin()+2,v2.rend());
    for (int i : v2) cout<< i << ' ';
    cout << '\n';

    vector<int> v3 = {1,2,3,4,5,6};
    rotate(v3.rbegin()+1,v3.rbegin()+2,v3.rbegin()+5);
    for (int i : v3) cout<< i << ' ';
    cout << '\n';
}
void self_rotate(){
    vector<int> v = {1,2,3,4,5,6};
    for (int i : v)  cout<< i << ' ';
    cout << '\n';

    int temp = v[0];
    for (int i = 0; i < v.size()-1; i++){
        v[i] = v[i+1];
    }
    v[v.size()-1] = temp;
    for (int i : v)  cout<< i << ' ';
    cout << '\n';
}
int main(){
    cout << "unclock ---"<<'\n';
    rotate_unclock();
    cout << "clock ---"<<'\n';
    rotate_clock();
    cout << "self---"<<'\n';
    self_rotate();

}