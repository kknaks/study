#include <bits/stdc++.h>
using namespace std;

const int v = 10;
bool a[v][v], visited[v];

void go(int from){
    visited[from] = 1;
    cout << from << '\n';
    for (int i = 0; i < v; i++){
        if (visited[i]) continue;
        if (a[from][i]) go(i);
    }

}

int main(){
    a[1][2] = 1; a[1][3] = 1; a[3][4] = 1;
    a[2][1] = 1; a[3][1] = 1; a[4][3] = 1;

    for (int i = 0; i < v; i++){
        for (int j = 0; j < v; j++){
            if (a[i][j] && visited[i] == 0){
                go(i);
            }
        }
    }
    return 0;
}
