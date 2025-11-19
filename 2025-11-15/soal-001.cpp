#include <bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;
using vi = vector<int>;

bool vis[100001];
vi adj[100001];

void dfs(int node);

int main(){
    

    int node, hubungan, hub = 0;
    int node1, node2;
    cin >> node >> hubungan;
    for (int i = 0; i < hubungan; i++){
        cin >> node1 >> node2;
        adj[node1].pb(node2);
        adj[node2].pb(node1);
    }
    for (int terhubung = 1; terhubung <= node; terhubung++){
        if (!vis[terhubung]){
            dfs(terhubung);
            hub++;
        }
    }
    cout << hub;
}

void dfs(int node){
    vis[node] = true;
    for (int arah : adj[node]){
        if (!vis[arah]) dfs(arah);
    }
}
