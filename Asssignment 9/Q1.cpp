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

    cout<<"Enter the edges(source dest):\n";
    for(int i=0;i<e;i++)
    {
        int source,dest;
        cin>>source;
        cin>>dest;
        adj[source][dest]=1;
        adj[source][dest]=1;
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
        int source=q.front();
        q.pop();
        cout<<source<<" ";
        for(int i=1;i<=n;i++)
        {
            if(adj[source][i]==1 && !visited[i])
            {
                visited[i]=true;
                q.push(i);
            }
        }
    }
    return 0;
}
