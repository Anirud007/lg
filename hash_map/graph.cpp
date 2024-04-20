#include <iostream> 
#include <unordered_map>
#include <list>
using namespace std;

class graph {
    public:
    unordered_map<int, list<int>> adj;

    void addedge(int u, int v, bool dir) {
    
        adj[u].push_back(v);
    
        if (dir == 0) {
            adj[v].push_back(u);
        }
    }
    void print_g() {
        for(auto i : adj)  {
            cout << i.first  << " -> ";
            for (auto j : i.second) {
                cout << j << " , ";
            }
            cout << endl;
        }
    }
    
};

int main() {
    int n;
    cout  << "Enter number of Nodes" << endl;
    cin >> n;
    
    int m;
    cout  << "Enter Number of Edges" << endl;
    cin >> m;

    graph g;
    
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g.addedge(u, v, 0);
    }
    g.print_g();

    return 0;
}