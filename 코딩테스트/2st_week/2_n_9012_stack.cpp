
#include <bits/stdc++.h>
using namespace std;

int t,ret;
string s;

bool check(string s){
    stack<char> stk;
    for (char a:s){
        if (a=='(') stk.push(a);
        else {
            if (!stk.empty()) stk.pop();
            else return false;
        }
    }
    return stk.empty();
}

int main(){
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> s;
        if (check(s)) cout << "YES" << '\n';
        else cout << "NO" <<'\n';
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// int t,ret;
// string s;

// int check(string s){
//     int ret = 0;
//     for (char a:s){
//         if (a=='(') ret++;
//         else ret--;
//         if (ret < 0) return -1;
//     }
//     return ret;
// }

// int main(){
//     cin.tie(NULL); cout.tie(NULL);
//     cin >> t;
//     for (int i = 0; i < t; i++){
//         cin >> s;
//         if (check(s) == 0) cout << "YES" << '\n';
//         else cout << "NO" <<'\n';
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int t,ret;
// string s;

// int main(){
//     cin.tie(NULL); cout.tie(NULL);
//     cin >> t;
//     for (int i = 0; i < t; i++){
//         int ret = 0;
//         cin >> s;
//         for (char a:s){
//             if(a == '(') ret++;
//             else ret--;
//             if (ret < 0){
//                 break;
//             }
//         }
//         if (ret == 0) cout << "YES" << '\n';
//         else cout << "NO" <<'\n';
//     }
// }

