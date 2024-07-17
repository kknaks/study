#include <bits/stdc++.h>
using namespace std;

int n,m,start_y,start_x,end_y,end_x,y,x,ny,nx;
int dy[] = {-1,0,1,0};
int dx[] = {0,1,0,-1};
int mp[104][104];
int visited[104][104];

int main(){
    cin >> n >> m;
    cin >> start_y >> start_x;
    cin >> end_y >> end_x;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> mp[i][j];
        }
    }
    cout << " ------  \n";

    queue<pair<int,int>> q;
    visited[start_y][start_x] = 1;
    q.push({start_y,start_x});

    while (q.size()){
        tie(y,x) = q.front();
        q.pop();
        for (int i = 0; i < 4; i++){
            ny = y + dy[i];
            nx = x + dx[i];
            if (nx <0 || ny < 0 || nx >=n || ny >= m) continue;
            if (mp[ny][nx] == 1 && !visited[ny][nx]) {
                q.push({ny,nx});
                visited[ny][nx] = visited[y][x] + 1;
            }
        }
    }
    cout << visited[end_y][end_x];
}
