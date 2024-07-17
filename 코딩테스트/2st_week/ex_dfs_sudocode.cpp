#include <bits/stdc++.h>
using namespace std;

const int n = 6;
vector<int> adj[n];
int visited[n];

void dfs(int a_num){
    visited[a_num] = 1;
    cout << a_num << " ";
    for (int i :adj[a_num]){
        if (visited[i] == 0) dfs(i);
    }
    cout << a_num << " end!";
    return;
}
int main(){
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[4].push_back(2);
    adj[2].push_back(5);
    dfs(1);
}
