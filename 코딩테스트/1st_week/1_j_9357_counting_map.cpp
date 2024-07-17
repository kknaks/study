#include <bits/stdc++.h>
using namespace std;

int test, n;
string cl,ty;

int main(){
    cin >> test;
    while (test--){
        cin >> n;
        map<string,int> mp; 
        while (n--){
            cin >> cl >> ty;
            mp[ty]++;
        }

        long long ret = 1;
        for (auto it : mp){
            ret *= ((long long)it.second+1);
        }
        cout << --ret << '\n';
    }
}


// #include <bits/stdc++.h>
// using namespace std;

// map<string, int> mp;
// int test,n, ret = 1;
// string clothes, type;

// int main(){
//     // ios_base::sync_with_stdio(false);
//     // cin.tie(false); cout.tie(false);

//     cin >> test;
//     for (int i = 0; i < test; i++){
//         cin >> n;
//         for (int j = 0; j < n; j++){
//             cin >> clothes >> type;
//             mp[type]++;
//         }
//         for (auto it : mp){
//             //cout << (it).first << " : " << (it).second << endl; 
//             ret *= ((it).second+1);
//         }
//         cout << ret - 1 << '\n'; 
//         mp.clear();
//         ret = 1;
//     }