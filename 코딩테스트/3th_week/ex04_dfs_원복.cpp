#include <bits/stdc++.h>
using namespace std;

int visited[4];
vector<int> adj[4];
vector<int> v;

void print(){
    for(int i : v) cout << char(i +'a') << " ";
    cout << '\n';
}

void dfs(int here){
    if (v.size() == 3){
        print();
        return;
    }
    for (int there : adj[here]){
        if (visited[there]) continue;
        visited[there] = 1;
        v.push_back(there);
        dfs(there);
        visited[there] = 0;
        v.pop_back();
    }
}

int main(){
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[1].push_back(0);
    adj[2].push_back(1);
    adj[3].push_back(1);

    visited[0] = 1;
    v.push_back(0);
    dfs(0);
    return 0;
}