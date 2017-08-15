﻿/* #CC
       Zey_S : //z 17-05-20 17:55:49 L.225'21851 T1847926206.K.F2916439908-+----+----+----+----+
		//z
       Zey_E : //z 17-05-20 17:55:49 L.225'21851 T1847926206.K---+----+----+----+----+----+----+
       Zcl_S : //z 17-05-20 17:55:49 L.225'21851 T1847926206.K---+----+----+----+----+----+----+
       Zcl_E : //z 17-05-20 17:55:49 L.225'21851 T1847926206.K---+----+----+----+----+----+----+
     Zndex_S : //z 17-05-20 17:55:49 L.225'21851 T1847926206.K---+----+----+----+----+----+----+
     Zndex_E : //z 17-05-20 18:39:52 L.225'19208 T3137166107.K ~43  --+----+----+----+----+----+
\* #HE //z 2017-05-20 17:55:49 L.225'21851 BG57IV3 T1847926206.K*******************************/

// A C++ Program to detect cycle in a graph
#include<iostream>
#include <list>
#include <limits.h>

using namespace std;

class Graph
{
    int V;    // No. of vertices
    list<int> *adj;    // Pointer to an array containing adjacency lists
    bool isCyclicUtil(int v, bool visited[], bool *rs);  // used by isCyclic()
public:
    Graph(int V);   // Constructor
    void addEdge(int v, int w);   // to add an edge to graph
    bool isCyclic();    // returns true if there is a cycle in this graph
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

// This function is a variation of DFSUytil() in http://www.geeksforgeeks.org/archives/18212
bool Graph::isCyclicUtil(int v, bool visited[], bool *recStack)
{
    //z 17-05-20 17 是否访问过该顶点
    if(visited[v] == false)
    {
        // Mark the current node as visited and part of recursion stack
        //z 17-05-20 17 将给顶点标记为已访问过
        visited[v] = true;
        //z 17-05-20 17 将该顶点标记为 recursion stack 的一部分
        recStack[v] = true;

        // Recur for all the vertices adjacent to this vertex
        //z 17-05-20 17 遍历所有的邻接点
        list<int>::iterator i;
        for(i = adj[v].begin(); i != adj[v].end(); ++i)
        {
            //z 17-05-20 18 如果该点已经访问过，那么返回 true
            //z 17-05-20 18 或者该接点向下遍历的路径有环，那么返回 true
            if ( !visited[*i] && isCyclicUtil(*i, visited, recStack) )
            {
                return true;
            }
            else
            {
                //z 17-05-20 18 或者在dfs遍历路径上已经有了该节点，那么返回true
                if (recStack[*i])
                {
                    return true;
                }
            }
        }

    }

    //z 17-05-20 18 从该节点遍历完毕，没有发现环，则将该节点从栈上移除
    recStack[v] = false;  // remove the vertex from recursion stack
    return false;
}

// Returns true if the graph contains a cycle, else false.
// This function is a variation of DFS() in http://www.geeksforgeeks.org/archives/18212
bool Graph::isCyclic()
{
    // Mark all the vertices as not visited and not part of recursion
    // stack
    bool *visited = new bool[V];
    bool *recStack = new bool[V];
    for(int i = 0; i < V; i++)
    {
        visited[i] = false;
        recStack[i] = false;
    }

    // Call the recursive helper function to detect cycle in different
    // DFS trees
    //z 17-05-20 17 遍历所有的顶点
    for(int i = 0; i < V; i++)
    {
        if (isCyclicUtil(i, visited, recStack))
        {
            return true;
        }
    }

    return false;
}

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

    if(g.isCyclic())
        cout << "Graph contains cycle";
    else
        cout << "Graph doesn't contain cycle";
    return 0;
}