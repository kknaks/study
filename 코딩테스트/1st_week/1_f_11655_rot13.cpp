#include <bits/stdc++.h>
using namespace std;

string s;
int main(){
    getline(cin,s);
    for (char a : s){
        if (a >= 'A' && a <= 'Z'){
            if (a + 13 > 'Z') a = a - 13;
            else a = a + 13;
        }
        else if (a >= 'a' && a <= 'z'){
            if (a + 13 > 'z') a = a - 13;
            else a = a + 13;
        }

        cout << a;
    }
}

// 나의 풀이

// #include <bits/stdc++.h>
// using namespace std;

// string str, ret;
// int n ; 

// int main(){
//     getline(cin,str);
//     for (char a : str){
//         if (a >= 'A' && a <= 'Z') ret += (((a+13) - 'A')%26) + 'A';
//         else if (a >= 'a' && a <= 'z') ret += (((a+13) - 'a')%26) + 'a';
//         else ret += a;
//     }
//     cout << ret;
// }
