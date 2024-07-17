//bfs
//#include <bits/stdc++.h>
//using namespace std;
//
//int a[104][104],h,w,x,y;
//string s;
//
//int main(){
//    cin >> h >> w;
//    queue<pair<int,int>> q;
//    
//    for (int i = 0; i < h; i++){
//        cin >> s;
//        for (int j = 0; j < w; j++){
//            if (s[j] == 'c'){
//                a[i][j] = 0;
//                q.push({i,j});
//            }
//                else a[i][j] = -1;
//        }
//    }
//    
//    while (q.size()){
//        tie(y,x) = q.front(); q.pop();
//        int nx = x + 1;
//        if (nx > w) continue;
//        if (a[y][nx] == -1) {
//            a[y][nx] = a[y][x] + 1;
//            q.push({y,nx});
//        }
//    }
//    
//    for (int i = 0; i < h; i++){
//        for (int j = 0; j < w; j++){
//            cout << a[i][j] << " ";
//        }
//        cout << '\n';
//    }
//}

//dfs
#include <bits/stdc++.h>
using namespace std;

int a[104][104],h,w,x,y;
string s;

int main(){
    cin >> h >> w;
    queue<pair<int,int>> q;
    
    for (int i = 0; i < h; i++){
        cin >> s;
        for (int j = 0; j < w; j++){
            if (s[j] == 'c') a[i][j] = 0;
            else a[i][j] = -1;
        }
    }
    
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
             if (a[i][j] == 0){
                 int cnt = 1;
                 while (a[i][j+1] == -1){
                     a[i][j+1] = cnt++;
                     j++;
                 }
             }
        }
    }
    
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
}
