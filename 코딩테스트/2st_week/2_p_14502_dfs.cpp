#include <bits/stdc++.h>
using namespace std;

int n,m,a[10][10],visited[10][10],ret;
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
vector<pair<int,int>> wall,virus;

void dfs(int y, int x){
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (nx <0 || ny < 0 || ny >= n || nx >=m || a[ny][nx] == 1 || visited[ny][nx]) continue;
        dfs(ny,nx);
    }
}

int solve(){
    fill(&visited[0][0],&visited[0][0]+100,0);
    for (pair<int,int> it : virus){
        dfs(it.first,it.second);
    }
    
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(a[i][j] == 0 && !visited[i][j]) cnt++;
        }
    }
    return cnt;
}

int main(){
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j =0; j < m; j++){
            cin >> a[i][j];
            if (a[i][j] == 0) wall.push_back({i,j});
            if (a[i][j] == 2) virus.push_back({i,j});
        }
    }
    
    for (int i = 0; i < wall.size(); i ++){
        for (int j = 0; j < i; j++){
            for (int k = 0; k < j; k++){
                a[wall[i].first][wall[i].second] = 1;
                a[wall[j].first][wall[j].second] = 1;
                a[wall[k].first][wall[k].second] = 1;
                ret = max(ret,solve());
                a[wall[i].first][wall[i].second] = 0;
                a[wall[j].first][wall[j].second] = 0;
                a[wall[k].first][wall[k].second] = 0;
                
            }
        }
    }
    cout << ret << '\n';
}
