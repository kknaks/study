#include <bits/stdc++.h>
using namespace std;

string s,ret;
int cnt[200],odd,odd_idx;

int main(){
    cin >> s;
    for (char a : s) cnt[a]++;

    for(int i = 'Z'; i >= 'A'; i--){
        if (cnt[i] & 1){
            odd++;
            odd_idx = i;
            cnt[i]--;
        }

        if (odd > 1) break;

        for (int j = 0; j < cnt[i]; j+=2){
            ret = char(i) + ret + char(i);
        }
    }

    if (odd == 1) ret.insert(ret.begin()+ret.size() / 2,char(odd_idx));
    else if (odd > 1) cout << "I'm Sorry Hansoo";
    else cout << ret << "dfkaljfkja l"; 
}