#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int adj[100][100]={0};
    int n;
    cout<<"Enter number of nodes: ";
    cin>>n;
    
    int e;
    cout<<"Enter number of edges: ";
    cin>>e;

    cout<<"Enter the edges(u v):\n";
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u;
        cin>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    int start;
    cout<<"Enter starting node: ";
    cin>>start;
    bool visited[100]={false};
    queue<int>q;
    visited[start]=true;
    q.push(start);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int i=1;i<=n;i++)
        {
            if(adj[u][i]==1 && !visited[i])
            {
                visited[i]=true;
                q.push(i);
            }
        }
    }
    return 0;
}
