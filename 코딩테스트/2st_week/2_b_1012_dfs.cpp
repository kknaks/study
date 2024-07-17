#include <bits/stdc++.h>
using namespace std;

int T,n,m,k,y,x,ny,nx,ret;
int dy[] = {1,0,-1,0};
int dx[] = {0,1,0,-1};
int a[54][54];
int visited[54][54];

void dfs(int y, int x){
    visited[y][x] = 1;
    for (int i = 0; i < 4; i ++){
        ny = y + dy[i];
        nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >=n || nx >= m) continue;
        if (a[ny][nx] == 1 && !visited[ny][nx]) dfs(ny,nx);
    }
    return;
}

int main(){
    cin >> T;
    while (T--){
        fill(&a[0][0],&a[0][0]+54*54,0);
        fill(&visited[0][0],&visited[0][0]+54*54,0);
        ret = 0;
        cin >> m >> n >> k;
        for (int i = 0; i < k; i++){
            cin >> x >> y;
            a[y][x] = 1;
        }

        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (a[i][j] == 1 && !visited[i][j]){
                    ret++;
                    dfs(i,j);
                }
            }
        }
        cout << ret << '\n';
    }
}

