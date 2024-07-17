#include <bits/stdc++.h>
using namespace std;
#define y1 aaaa

int n,m,k,x,y,x1,y1,x2,y2,nx,ny;
int a[104][104];
int visited[104][104];
int dy[4] = {1,0,-1,0};
int dx[4] = {0,1,0,-1};
vector<int> ret;

int dfs(int y, int x){
    visited[y][x] = 1;
    int ret = 1;
    for (int i = 0; i < 4; i++){
        ny = y + dy[i];
        nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >= m || nx >= n) continue;
        if (!a[ny][nx] && !visited[ny][nx]){
            ret += dfs(ny,nx);
        }
    }
    return ret;
}

int main(){
    cin >> m >> n >> k;
    for (int i = 0; i < k; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        for (int rx = x1; rx < x2; rx++){
            for (int ry = y1; ry < y2; ry++){
                a[ry][rx] = 1;
            }
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (!(a[i][j]||visited[i][j])){
                ret.push_back(dfs(i,j));
            }
        }
    }



    sort(ret.begin(),ret.end());
    cout << ret.size() << '\n';
    for (int i : ret) cout << i << " ";

}


// #include <bits/stdc++.h>
// using namespace std;

// int n,m,k,y,x,ny,nx,cnt;
// int a[104][104];
// int visited[104][104];
// int dy[4] = {1,0,-1,0};
// int dx[4] = {0,1,0,-1};
// vector<int> v;

// void dfs(int y, int x){
//     visited[y][x] = 1;
//     for (int i = 0; i < 4; i++){
//         ny = y + dy[i];
//         nx = x + dx[i];
//         if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
//         if (!visited[ny][nx] && a[ny][nx] == 0) {
//             cnt++;
//             dfs(ny,nx);
//         }
//     }
//     return;
// }

// int main(){
//     cin >> n >> m >> k;
//     for (int i = 0; i < k; i++){
//         int lr,br,rr,tr;
//         cin >> lr >> br >> rr >> tr;
//         for (int ry = lr; ry < rr; ry++){
//             for (int rx = br; rx < tr; rx++){
//                 a[rx][ry] = 1;
//             }
//         }
//     }
    
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             if (!visited[i][j] && a[i][j] == 0){
//                 cnt = 1;
//                 dfs(i,j);
//                 v.push_back(cnt);
//             }
//         }
//     }
//     sort(v.begin(),v.end());
//     cout << v.size() << '\n';
//     for (int i : v) cout << i << " ";
//     cout << '\n';
// }
