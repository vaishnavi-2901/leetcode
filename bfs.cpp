//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> res;
        queue<int> q;
        int vis[V]={0};
        vis[0]=1;
        q.push(0);
        res.push_back(0); //push initial value in queue and res
        while(!q.empty()){
            int temp = q.front(); //pop the first value
            q.pop(); 
            for(int e:adj[temp]) if(!vis[e]){ //if it's cyclic graph, we need to check if the node is visited or not
                vis[e]=1; //mark the node as visited
                q.push(e); //push the child or connected node to queue
                res.push_back(e); // as well as in res array
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
