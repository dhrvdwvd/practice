#include<iostream>
#include<queue>

using namespace std;
int N, M;
int dist[1001][1001];
int vis[1001][1001];

bool isValid(int x, int y)
{
    if(x<1 || x>N || y<1 || y>M) return false;
    if(vis[x][y]==1) return false;
    return true;
}

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

void bfs(int srcX, int srcY)
{
    queue< pair<int,int> > Q;
    Q.push({srcX, srcY});
    vis[srcX][srcY] = 1;
    dist[srcX][srcY] = 0;

    while(!Q.empty())
    {
        int currX = Q.front().first;
        int currY = Q.front().second;
        Q.pop();

        for(int i=0; i<4; i++)
        {
            if(isValid( currX + dx[i], currY + dy[i] ))
            {
                int newX = currX + dx[i];
                int newY = currY + dy[i];

                Q.push({newX, newY});
                dist[newX][newY] = dist[currX][currY] + 1;
                vis[newX][newY] = 1;                
            }
        }
        
        if(vis[currX][currY]==0)
        {

        }
    }
    
}

int main()
{
    cin >> N >> M;
    int x, y;
    cin >> x >> y;
    bfs(x, y);
    return 0;
}