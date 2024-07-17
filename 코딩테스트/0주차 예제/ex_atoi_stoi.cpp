#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "12345";
    string s2 = "heelo";

    //atoi 는 숫자면 숫자를 반환 문자면 0(False)를 반환
    cout << atoi(s.c_str()) <<'\n';
    cout << atoi(s2.c_str()) <<'\n';

    //stoi는 숫자면 숫자를 반환 문자면 에러발생
    cout << stoi(s) << '\n';
    //cout << stoi(s) <<'\n';

}