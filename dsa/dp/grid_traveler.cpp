#include <iostream>

using namespace std;

long long grid[50][50];

long long gridTravelWays(int m, int n)
{
    if(grid[m][n]>=0) return grid[m][n];
    if(m==1 && n==1) return 1;
    if(m==0 || n==0) return 0;
    grid[m][n] = gridTravelWays(m, n-1) + gridTravelWays(m-1,n);
    return grid[m][n];
}
int main()
{
    int m, n;
    for(int i=0; i<50; i++){
        for(int j=0; j<50; j++)
        {
            grid[i][j] = -1;
        }
    }
    printf("Enter m n: ");
    scanf("%d %d", &m, &n);
    printf("Ways to travel: %d\n", gridTravelWays(m, n));
}