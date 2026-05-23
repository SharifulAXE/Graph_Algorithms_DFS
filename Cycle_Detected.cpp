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
 

bool dfs(int node, int parent, vector<int> adj[],vector<int>& vis){


    vis[node] = 1;

    for(auto child : adj[node])
    {
        // if not visited mins calling the node
        if(!vis[child])
        {
            if(dfs(child, node, adj, vis))
            {
                return true;
            }
        }

        // visited and not parent
        else if(child != parent)
        {
            return true;
        }
    }

    return false;
}
 

void solve() {

    // Code Here

    int n, m;
    cin >> n >> m;

    vector<int> adj[n + 1];

    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> vis(n + 1, 0);

    bool cycle = false;

    // graph connected or not se jnno ei loop 

    for(int i = 1; i <= n; i++)
    {
        if(!vis[i])
        {
            if(dfs(i, -1, adj, vis))
            {
                cycle = true;
                break;
            }
        }
    }

    if(cycle)
        cout << "Cycle Found\n";
    else
        cout << "No Cycle\n";


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