#include <bits/stdc++.h>
using namespace std;

const int v = 10;
vector<int> adj[v];
int visited[v];

void go(int idx){
    cout << idx << " ";
    visited[idx] = 1;
    for (int i : adj[idx]){
        if (visited[i]) continue;
        go(i);
    }

}

int main(){
    adj[1].push_back(2);
    adj[2].push_back(1);

    adj[1].push_back(3);
    adj[3].push_back(1);

    adj[3].push_back(4);
    adj[4].push_back(3);

    for (int i = 0; i < v; i++){
        if (adj[i].size() && visited[i] == 0) go(i);
    }

}