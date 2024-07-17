#include <bits/stdc++.h>
using namespace std;

string str,test;
int fs,ls,n;

int main(){
    cin >> n >> str;
    for (int i = 0; i < str.size(); i++){
        if (str[i] == 42) {
            fs = i;
            ls = (int)str.size() - fs -1;
            break;
        }
    }
    
    for (int i = 0; i < n; i++){
        cin >> test;
        if (str.substr(0,fs) == test.substr(0,fs)) {
            if(str.substr(str.length() - ls) == test.substr(test.length()-ls))
                cout << "DA" <<'\n';
            else cout << "NE" <<'\n';
        }
        else cout <<"NE" <<'\n';
    }
}
