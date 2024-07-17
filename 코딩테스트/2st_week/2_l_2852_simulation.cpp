#include <bits/stdc++.h>
#define prev nak
using namespace std;

int n,team,a,b,ta,tb;
string now,prev;

string print(int t){
    string m = "00" + to_string(ta/60);
    string s = "00" + to_string(ta%60);
    return m.substr(m.size()-2,2) + s.substr(s.size()-2,2);
}

int TtoS(string s){
    string m = s.substr(0,2);
    string s = s.substr(3,2);
    return atoi(m.c_str()) * 60 + atoi(s.c_str());
}

void go(int *t, string s){
    *t += TtoS(s) - TtoS(prev);
}

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> team >> now;
        if (a > b) go(&ta,now);
        else if(a < b) go(&tb,now);
        team == 1? a++ : b++;
        prev = now;
    }
    if (a > b) go(&ta,"48:00");
    else if(a < b) go(&tb,"48:00");

    cout << print(ta) <<'\n';
    cout << print(tb) <<'\n';
}









// #include <bits/stdc++.h>
// using namespace std;
// int n,m,s,team,a,b,ta,tb,now_time,pre_time;
// int main(){
//     scanf("%d",&n);
//     for(int i = 0; i < n; i++){
//         scanf("%d %d:%d",&team,&m,&s);
//         now_time = m*60+s;
//         if(a>b){
//             ta += now_time - pre_time;
//         }else if (a<b){
//             tb += now_time - pre_time;
//         }
//         if(team == 1) a++;
//         else b++;
//         pre_time = now_time;
//     }
    
//     if(a>b) ta += 2880 - pre_time;
//     else if (a<b) tb += 2880 - pre_time;
//     printf("%02d:%02d\n",ta/60,ta%60);
//     printf("%02d:%02d\n",tb/60,tb%60);
// }
