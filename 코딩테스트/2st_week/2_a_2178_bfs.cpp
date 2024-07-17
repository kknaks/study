#include <bits/stdc++.h>
using namespace std;

int y,x,ny,nx,n,m;
int mp[104][104];
int visited[104][104];
int dy[] = {1,0,-1,0};
int dx[] = {0,1,0,-1};

int main(){
    // cin >> n >> m;
    // for (int i = 0; i < n; i++){
    //     string s;
    //     cin >> s;
    //     for (int j = 0; j < m; j++){
    //         int temp = s[j] - 48 ;
    //         mp[i][j] = temp;
    //     }
    // }

    scanf("%d %d", &n,&m);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%1d",&mp[i][j]);
        }
    }

    queue<pair<int,int>> q;
    q.push({0,0});
    visited[0][0] = 1;

    while (q.size()){
        tie(y,x) = q.front(); q.pop();
        for (int i = 0; i < 4; i++){
            ny = y + dy[i];
            nx = x + dx[i];
            if (ny < 0 || nx < 0 || ny >= n || nx >= m || mp[ny][nx] ==0) continue;
            if (visited[ny][nx]) continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny,nx});
        }
    }
    cout << visited[n-1][m-1] << '\n';
}