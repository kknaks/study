#include <bits/stdc++.h>
using namespace std;

int n, y, x, ny, nx, max_h = -10009, safe_z = 1,ret;
int dy[4] = {1,0,-1,0};
int dx[4] = {0,1,0,-1};
int zone[104][104];
int visited[104][104];

void dfs(int y, int x, int h){
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++){
        ny = y + dy[i];
        nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >=n || nx >= n) continue;
        if (zone[ny][nx] >= h && !visited[ny][nx]) dfs(ny,nx,h);
    }
    return;
}

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> zone[i][j];
            max_h = max(max_h,zone[i][j]);   
        }
    }

    for (int h = 1; h < max_h; h++){
        // cout <<"h : " <<  h << "------\n" ;
        ret = 0;
        fill(&visited[0][0],&visited[0][0]+104*104,0);
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                // cout << i << ","<< j << " / ";
                if (zone[i][j] >= h && !visited[i][j]){
                    ret++;
                    dfs(i,j,h);
                }
            }
        }
        // cout << endl;
        // cout << "ret : " << ret << '\n';
        safe_z = max(safe_z,ret);
    }
    cout << safe_z;
}