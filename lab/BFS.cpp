#include<stdio.h>
#include <queue>
int V = 5;
int visited[5];
int G[5][5] = {
{0,1,0,0,1},
{1,0,0,1,1},
{0,0,0,1,0},
{0,1,1,0,1},
{1,1,0,1,0}
};
void BFS(int v)
{
std::queue<int> Q;
visited[v] = 1;
printf("%d ", v);
Q.push(v);
while(!Q.empty())
{
int current = Q.front();
Q.pop();
for(int j=0; j<V; j++)
{
if(G[current][j]==1 && visited[j]==0)
{
visited[j] = 1;
printf("%d ", j);
Q.push(j);
}
}
}
}
int main()
{
BFS(0);
}

