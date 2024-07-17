#include <bits/stdc++.h>
using namespace std;
string s;
int flag;

bool isVowel(int idx){
    return (idx == 'a' || idx == 'e' || idx == 'i' || idx == 'o' || idx == 'u');
}

int main(){
    while (1){
        cin >> s;
        if (s == "end") break;
        int vcnt = 0;
        int lcnt = 0;
        int include_v = 0;
        int prev = -1;
        for (int i = 0; i < s.size(); i++){
            int idx = s[i];
            if (isVowel(idx)) {
                vcnt++;
                lcnt = 0;
                include_v = 1;
            } else{
                vcnt = 0;
                lcnt++;
            }
            if (vcnt == 3 || lcnt == 3) flag = 1;
            if ((i >=1 && prev == idx) && (idx != 'e' && idx != 'o')) flag = 1;
            prev = idx;
        }
        if (include_v == 0) flag = 1;
        if(flag) cout << "<" << s << ">" << "is not acceptable";
        else cout << "<" << s << ">" << "is acceptable";
        cout << "\n";
    }
}