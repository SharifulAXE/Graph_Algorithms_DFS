/*
In The Name Of Allah

From Dust I Have Come I Will be Dust

Author: Md. Shariful Islam Sijan
*/

#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define vi vector<int>
#define ip(x) for(auto &it : x) cin >> it
#define all(x) x.begin(),x.end()

void solve() {

    // Code Here

    

    int n, e;
    cin >> n >> e;

    // adjacency list

    vector<int> adj[n + 1];

    // input edges
    for(int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u); // remove this line for directed graph
    }


    // start in the graph node that's traversal all node

    int start;
    cin >> start;


    // visited array
    vector<bool> visited(n + 1, false);

    queue<int> q;

    // start BFS

    q.push(start);
    visited[start] = true;


    cout << "BFS Traversal: ";

    // remainder all time graph is a disconnected but it is a connected graph 

    while(!q.empty()) {

        int node = q.front();
        q.pop();

        cout << node << " ";

        // visit all neighbors
        for(int neighbor : adj[node]) {

            if(!visited[neighbor]) {

                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    cout << endl;
 


}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    cin >> tc;
    while(tc--){
        solve();
    }
}

/**
░█████╗░░░░░░░░░░░░░░░
██╔══██╗░░██╗░░░░██╗░░
██║░░╚═╝██████╗██████╗
██║░░██╗╚═██╔═╝╚═██╔═╝
╚█████╔╝░░╚═╝░░░░╚═╝░░
░╚════╝░░░░░░░░░░░░░░░
**/