#include <stdio.h>
#include <string.h>
#include <stdlib.h>


class Mystring{
private:
    int m_len;
    char *mp_str;

public:
    void Inite(){
        m_len = 0;
        mp_str = NULL;
    }
    
    int CopyDynamicString(char ap_str[]){
        Cleanup();
        m_len = strlen(ap_str) + 1;
        mp_str = (char*)malloc(m_len);
        if (mp_str !=NULL) memcpy(mp_str,ap_str,m_len);
        return m_len;
    }
    
    void ShowStringInfo(){
        if (mp_str != NULL) printf("%s : %d\n",mp_str,m_len);
    }
    
    void Cleanup(){
        if (mp_str != NULL) {
            free(mp_str);
            mp_str = NULL;
        }
    }
};


int main(){
    char str[32];
    scanf("%s",str);
    
    Mystring my_str;
    my_str.Inite();
    my_str.CopyDynamicString(str);
    my_str.ShowStringInfo();
    my_str.Cleanup();
    return 0;
}


//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//    vector<int> v;
//    for (int i = 0; i <=5; i++) v.push_back(i);
//    // for (int i = 0; i <=5; i++){
//    //     cout << i <<"번째요소 : " << *(v.begin()+i) <<'\n';
//    //     cout << i <<"번째주소 : " << &*(v.begin()+i) <<'\n';
//    // }
//    cout << '\n';
//    for (vector<int>::iterator it = v.begin(); it !=v.end();it++){
//        cout << *it << ' ';
//    }
//    cout << '\n';
//    for (auto it= v.begin() ; it != v.end();it++){
//        cout << *it << ' ';
//    }
//    // cout << '\n';
//    // auto it = v.begin();
//    // advance(it,3);
//    // cout << *it << '\n';
//
//    // cout << '\n';
//    // vector<int>::iterator it;
//    // cout << *it << '\n';

}
