/* #CC
       Zey_S : //z 17-05-20 19:19:14 L.225'16846 T131294808 .K.F3337340546-+----+----+----+----+
		//z
       Zey_E : //z 17-05-20 19:19:14 L.225'16846 T131294808 .K---+----+----+----+----+----+----+
       Zcl_S : //z 17-05-20 19:19:14 L.225'16846 T131294808 .K---+----+----+----+----+----+----+
       Zcl_E : //z 17-05-20 19:19:14 L.225'16846 T131294808 .K---+----+----+----+----+----+----+
     Zndex_S : //z 17-05-20 19:19:14 L.225'16846 T131294808 .K---+----+----+----+----+----+----+
     Zndex_E : //z 17-05-20 19:23:25 L.225'16595 T132265141 .K ~18  --+----+----+----+----+----+
\* #HE //z 2017-05-20 19:19:14 L.225'16846 BG57IV3 T131294808 .K*******************************/

// A DFS based approach to find if there is a cycle
// in a directed graph.  This approach strictly follows
// the algorithm given in CLRS book.
#include <bits/stdc++.h>
using namespace std;
 
enum Color {WHITE, GRAY, BLACK};
 
// Graph class represents a directed graph using
// adjacency list representation
class Graph
{
    int V; // No. of vertices
    list<int>* adj; // adjacency lists
 
    // DFS traversal of the vertices reachable from v
    bool DFSUtil(int v, int color[]);
public:
    Graph(int V);  // Constructor
 
    // function to add an edge to graph
    void addEdge(int v, int w);
 
    bool isCyclic();
};
 
// Constructor
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
// Utility function to add an edge
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v's list.
}
 
// Recursive function to find if there is back edge
// in DFS subtree tree rooted with 'u'
bool Graph::DFSUtil(int u, int color[])
{
    // GRAY :  This vertex is being processed (DFS
    //         for this vertex has started, but not
    //         ended (or this vertex is in function
    //         call stack)
	//z 17-05-20 19 如果当前顶点正在被访问，则标记为灰色
    color[u] = GRAY;

    // Iterate through all adjacent vertices
    list<int>::iterator i;
	//z 17-05-20 19 遍历所有的邻接点
    for (i = adj[u].begin(); i != adj[u].end(); ++i)
    {
        int v = *i;  // An adjacent of u
 
        // If there is
		//z 17-05-20 19 如果当前顶点为灰色，说明在路径上。如果正在访问的节点已为灰色。
        if (color[v] == GRAY)
          return true;
 
        // If v is not processed and there is a back
        // edge in subtree rooted with v
        if (color[v] == WHITE && DFSUtil(v, color))
          return true;
    }
 
    // Mark this vertex as processed
    color[u] = BLACK;
 
    return false;
}
 
// Returns true if there is a cycle in graph
bool Graph::isCyclic()
{
    // Initialize color of all vertices as WHITE
    int *color = new int[V];
	//z 17-05-20 19 初始，标记所有顶点为白色
    for (int i = 0; i < V; i++)
        color[i] = WHITE;
 
    // Do a DFS traversal beginning with all
    // vertices
	//z 遍历顶点
    for (int i = 0; i < V; i++)
        if (color[i] == WHITE)
           if (DFSUtil(i, color) == true)
              return true;
 
    return false;
}
 
// Driver code to test above
int main()
{
    // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    if (g.isCyclic())
        cout << "Graph contains cycle";
    else
        cout << "Graph doesn't contain cycle";
 
    return 0;
}